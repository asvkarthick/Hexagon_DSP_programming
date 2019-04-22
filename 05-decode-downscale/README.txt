This program is to decode the downscaleBy2 example program in Hexagon SDK

$ hexagon-clang decode-downscale.c -o decode-downscale
$ hexagon-sim decode-downscale
hexagon-sim INFO: The rev_id used in the simulation is 0x00004060 (v60a_512)
Top1 int = 01020304
Top2 int = 05060708
Bot1 int = 0a0b0c0d
Bot2 int = 0e0f1011

Zero extend bytes to half words
Top1 long long = 0001000200030004
Top2 long long = 0005000600070008
Bot1 long long = 000a000b000c000d
Bot2 long long = 000e000f00100011

Vector reduce add into 4 32-bit sums, one for each 2x2 pixel block
Top1 long long = 0000001800000020
Top2 long long = 0000002800000030

Vector shift to divide each sum by 4 and pack each to 16-bits
Top1 long long = 000a000c00060008

Done!
	T0: Insns=154552 Packets=72335
	T1: Insns=0 Packets=0
	T2: Insns=0 Packets=0
	T3: Insns=0 Packets=0
	Total: Insns=154552 Pcycles=144672
