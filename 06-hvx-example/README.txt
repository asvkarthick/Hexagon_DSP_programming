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




$ hexagon-clang -mhvx -mv65 -DLOG2VLEN=7 03-hvx-example.c -o hvx-example
hexagon-clang: warning: The HVX vector length of 64 Bytes will soon be deprecated. Please switch to 128 Byte mode. [-Wdeprecated-hvx-length]

$ hexagon-sim hvx-example 
hexagon-sim INFO: The rev_id used in the simulation is 0x00004065 (v65a_512)
   0: ff 0
   1: ff 0
   2: ff 0
   3: ff 0
   4: ff 0
   5: ff 0
   6: ff 0
   7: ff 0
   8: ff 0
   9: ff 0
  10: ff 0
  11: ff 0
  12: ff 0
  13: ff 0
  14: ff 0
  15: ff 0
  16: ff 0
  17: ff 0
  18: ff 0
  19: ff 0
  20: ff 0
  21: ff 0
  22: ff 0
  23: ff 0
  24: ff 0
  25: ff 0
  26: ff 0
  27: ff 0
  28: ff 0
  29: ff 0
  30: ff 0
  31: ff 0
  32: ff 0
  33: ff 0
  34: ff 0
  35: ff 0
  36: ff 0
  37: ff 0
  38: ff 0
  39: ff 0
  40: ff 0
  41: ff 0
  42: ff 0
  43: ff 0
  44: ff 0
  45: ff 0
  46: ff 0
  47: ff 0
  48: ff 0
  49: ff 0
  50: ff 0
  51: ff 0
  52: ff 0
  53: ff 0
  54: ff 0
  55: ff 0
  56: ff 0
  57: ff 0
  58: ff 0
  59: ff 0
  60: ff 0
  61: ff 0
  62: ff 0
  63: ff 0
  64: ff ff
  65: ff ff
  66: ff ff
  67: ff ff
  68: ff ff
  69: ff ff
  70: ff ff
  71: ff ff
  72: ff ff
  73: ff ff
  74: ff ff
  75: ff ff
  76: ff ff
  77: ff ff
  78: ff ff
  79: ff ff
  80: ff ff
  81: ff ff
  82: ff ff
  83: ff ff
  84: ff ff
  85: ff ff
  86: ff ff
  87: ff ff
  88: ff ff
  89: ff ff
  90: ff ff
  91: ff ff
  92: ff ff
  93: ff ff
  94: ff ff
  95: ff ff
  96: ff ff
  97: ff ff
  98: ff ff
  99: ff ff
 100: ff ff
 101: ff ff
 102: ff ff
 103: ff ff
 104: ff ff
 105: ff ff
 106: ff ff
 107: ff ff
 108: ff ff
 109: ff ff
 110: ff ff
 111: ff ff
 112: ff ff
 113: ff ff
 114: ff ff
 115: ff ff
 116: ff ff
 117: ff ff
 118: ff ff
 119: ff ff
 120: ff ff
 121: ff ff
 122: ff ff
 123: ff ff
 124: ff ff
 125: ff ff
 126: ff ff
 127: ff ff
Simple HVX example

Done!
	T0: Insns=505325 Packets=230478
	T1: Insns=0 Packets=0
	T2: Insns=0 Packets=0
	T3: Insns=0 Packets=0
	Total: Insns=505325 Pcycles=460958


$ hexagon-clang -mhvx -mv65 -DLOG2VLEN=7 -mhvx-length=128B 07-hvx-example.c -o hvx-example
