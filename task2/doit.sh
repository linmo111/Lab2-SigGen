rm -rf obj_dir
rm -f counter.vcd

verilator -Wall -cc --trace counter.sv sinegen.sv rom.sv  --exe sinegen_tb.cpp

make -j -C obj_dir/ -f Vcounter.mk Vcounter

obj_dir/Vcounter