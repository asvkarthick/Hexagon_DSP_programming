$ hexagon-clang -mhvx -mv65 -DLOG2VLEN=7 01-hvx-example.c -o hvx-example
hexagon-clang: warning: The HVX vector length of 64 Bytes will soon be deprecated. Please switch to 128 Byte mode. [-Wdeprecated-hvx-length]

$ hexagon-sim hvx-example 
hexagon-sim INFO: The rev_id used in the simulation is 0x00004065 (v65a_512)
Simple HVX example

Done!
	T0: Insns=9342 Packets=4870
	T1: Insns=0 Packets=0
	T2: Insns=0 Packets=0
	T3: Insns=0 Packets=0
	Total: Insns=9342 Pcycles=9742
