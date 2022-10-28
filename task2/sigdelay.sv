module sigdelay #(
    parameter A_WIDTH =8,
              D_WIDTH =8
)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic wr_en,
    input logic rd_en,
    input logic [D_WIDTH-1:0] incr,
    input logic [D_WIDTH-1:0] phaseDiff,
    input logic [D_WIDTH-1:0] din,
    output logic [D_WIDTH-1:0] dout

);

    logic [A_WIDTH-1:0] rd_addr;
    logic [A_WIDTH-1:0] wr_addr; //interconnect wire

counter addrConter(
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .phaseDiff (phaseDiff),
    .count1 (wr_addr),
    .count2 (rd_addr)

);

rom sineRom(
    .clk (clk),
    .wr_en (wr_en),
    .rd_en (rd_en),
    .wr_addr (wr_addr),
    .rd_addr (rd_addr),
    .din (din),
    .dout (dout)
);

endmodule

