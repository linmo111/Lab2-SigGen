module counter #(
    parameter WIDTH = 9
)(
    input logic  clk,//clock
    input logic  rst, //rest
    input logic en, //counter enable
    input logic [WIDTH-1:0] incr,
    input logic [WIDTH-1:0] phaseDiff,
    output logic [WIDTH-1:0] wr_addr,
    output logic [WIDTH-1:0] rd_addr
);
    
    //logic [WIDTH-1:0] offset;

always_ff @ (posedge clk)
    if (rst) begin
        rd_addr <= {WIDTH{1'b0}};
        //offset <= phaseDiff;               
    end 
    else if (en) begin    
        rd_addr <= rd_addr +incr;          
        wr_addr <= rd_addr +phaseDiff;
            
    end
   ;
// {{ adds up the bits together, so 7 zeros make 0000000 and 1 en, so 0000000en, if en is 1, then the value = 00000001 thus 1, else 0}}
endmodule
