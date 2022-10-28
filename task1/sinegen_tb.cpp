#include "Vcounter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env){
    int i;
    int clk;
    int incr=1;

   // Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vcounter* top = new  Vcounter;
    // init trace dump
  //  Verilated::traceEverOn(true);
  //  VerilatedVcdC* tfp = new VerilatedVcdC;
  //  top->trace (tfp, 99);
  //  tfp->open("counter.vcd");
   

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->en = 1;


    // init Vbuddy
    if (vbdOpen()!=1)  return(-1);
    vbdHeader("Lab 2: sinegen");
    

    // run simulation for many clock cycles
    for (i=0; i<1000000; i++){
        // dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++){
           // tfp->dump(2*i+clk);
            top->clk = !top->clk; // toggle clock up and down
            top->eval();
        }

        //challenge:
        incr=vbdValue();
        
        vbdCycle(i+1);
        top->incr=incr;
        top->rst =0 ;
        top->en = 1;
        vbdPlot((int (top->dout)), 0, 255);
       // top->preset=vbdValue();
        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
        exit(0); 
    }

    vbdClose();
   // tfp->close();
    exit(0);
}