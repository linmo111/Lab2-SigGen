rm -rf obj_dir
rm -f Vsigdelay.vcd

verilator -Wall -cc --trace  Vsigdelay.sv ram.sv counter.sv  --exe sigdelay_tb.cpp

make -j -C obj_dir/ -f VVsigdelay.mk VVsigdelay

obj_dir/VVsigdelay