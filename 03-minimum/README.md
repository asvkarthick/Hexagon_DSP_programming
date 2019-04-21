$ hexagon-clang minimum.c -o minimum 
$ hexagon-sim minimum
hexagon-sim INFO: The rev_id used in the simulation is 0x00004060 (v60a_512)
v1 = ffff0000ffff0000
v2 = ffff0000ffff
Result = ffffffffffffffff
v1 = 12345678abcdef12
v2 = ef12abcd56781234
Result = ef12abcdabcdef12

Done!
	T0: Insns=51696 Packets=25270
	T1: Insns=0 Packets=0
	T2: Insns=0 Packets=0
	T3: Insns=0 Packets=0
	Total: Insns=51696 Pcycles=50542
