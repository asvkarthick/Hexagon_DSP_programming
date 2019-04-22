$ hexagon-clang 01-negate.c -o 01-negate
$ hexagon-sim 01-negate
hexagon-sim INFO: The rev_id used in the simulation is 0x00004060 (v60a_512)
Val = a5a5a5a5
Negate Val = 5a5a5a5b

Done!
	T0: Insns=15694 Packets=7874
	T1: Insns=0 Packets=0
	T2: Insns=0 Packets=0
	T3: Insns=0 Packets=0
	Total: Insns=15694 Pcycles=15750

$ hexagon-clang 02-arithmetic.c -o 02-arithmetic
$ hexagon-sim 02-arithmetic
hexagon-sim INFO: The rev_id used in the simulation is 0x00004060 (v60a_512)
Val1 = 11111111
Val2 = 22222222
Add  = 33333333

Done!
	T0: Insns=18830 Packets=9354
	T1: Insns=0 Packets=0
	T2: Insns=0 Packets=0
	T3: Insns=0 Packets=0
	Total: Insns=18830 Pcycles=18710
