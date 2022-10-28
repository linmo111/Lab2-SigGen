module Vsigdelay #(
    parameter A_WIDTH =9,
              D_WIDTH =8
)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic wr_en,
    input logic rd_en,
    input logic [A_WIDTH-1:0] incr,
    input logic [A_WIDTH-1:0] phaseDiff,
    input logic [D_WIDTH-1:0] mic_signal,
    output logic [D_WIDTH-1:0] delayed_signal

);

    logic [A_WIDTH-1:0] rd_addr;
    logic [A_WIDTH-1:0] wr_addr; //interconnect wire

counter addrConter(
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .phaseDiff (phaseDiff),
    .wr_addr (wr_addr),
    .rd_addr (rd_addr)

);

ram sineRam(
    .clk (clk),
    .wr_en (wr_en),
    .rd_en (rd_en),
    .wr_addr (wr_addr),
    .rd_addr (rd_addr),
    .din (mic_signal),
    .dout (delayed_signal)
);

endmodule

