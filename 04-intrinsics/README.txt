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

Val1 = 7fffffff
Val2 = 7fffffff
Add  = fffffffe

Adding using saturation
Val1 = 7fffffff
Val2 = 7fffffff
Add  = 7fffffff

Done!
	T0: Insns=56854 Packets=27118
	T1: Insns=0 Packets=0
	T2: Insns=0 Packets=0
	T3: Insns=0 Packets=0
	Total: Insns=56854 Pcycles=54238

$ hexagon-clang 03-signextend.c -o 03-signextend
$ hexagon-sim 03-signextend
hexagon-sim INFO: The rev_id used in the simulation is 0x00004060 (v60a_512)
Sign extend the least significant byte
Input = 80
Result = ffffff80
Sign extend the least significant half word
Input = 8000
Result = ffff8000

Done!
	T0: Insns=48430 Packets=22868
	T1: Insns=0 Packets=0
	T2: Insns=0 Packets=0
	T3: Insns=0 Packets=0
	Total: Insns=48430 Pcycles=45738
