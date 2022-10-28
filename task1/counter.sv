module counter #(
    parameter WIDTH = 8
)(
    input logic  clk,//clock
    input logic  rst, //rest
    input logic en, //counter enable
    input logic [WIDTH-1:0] incr,
    output logic [WIDTH-1:0] count //
);

always_ff @ (posedge clk)
    if (rst) count <= {WIDTH{1'b0}};
    else if (en) count <= count +incr;
// {{ adds up the bits together, so 7 zeros make 0000000 and 1 en, so 0000000en, if en is 1, then the value = 00000001 thus 1, else 0}}
endmodule
