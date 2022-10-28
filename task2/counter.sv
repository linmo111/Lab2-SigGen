module counter #(
    parameter WIDTH = 8
)(
    input logic  clk,//clock
    input logic  rst, //rest
    input logic en, //counter enable
    input logic [WIDTH-1:0] incr,
    input logic [WIDTH-1:0] phaseDiff,
    output logic [WIDTH-1:0] count1,
    output logic [WIDTH-1:0] count2
);
initial begin
     count2 <= phaseDiff; 
end;
always_ff @ (posedge clk)
    if (rst) begin
        count1 <= {WIDTH{1'b0}};
        count2 <= phaseDiff; 
    end else if (en) begin 
            count1 <= count1 +incr;
            count2 <= count2 +incr; 
    end
   ;
// {{ adds up the bits together, so 7 zeros make 0000000 and 1 en, so 0000000en, if en is 1, then the value = 00000001 thus 1, else 0}}
endmodule
