// This program computes average of 4 values
// a b
// c d
// Output = (a + b + c + d) / 4

#include <hvx_hexagon_protos.h>
#include <hexagon_protos.h>
#include <hexagon_types.h>
#include <stdio.h>
#include <string.h>

#define N 128

unsigned char a[N], b[N];

int main()
{
    HVX_Vector v1, v2, vsum, *vp;
    HEXAGON_Vect32 const_0x40404040 = 0x40404040;
    int i;

    *((unsigned int*) &b[28]) = 0x40404040;
    vp = (HVX_Vector*) b;
    v1 = Q6_V_vzero();

    v2 = *vp;
    vsum = Q6_Vh_vdmpy_VubRb(v1, const_0x40404040);
    vsum = Q6_Vh_vdmpyacc_VhVubRb(vsum, v2, const_0x40404040);

    vsum = Q6_Vb_vpacko_VhVh(v1, vsum);
    *vp = vsum;

    for(i = 0; i < N; i++)
        printf("%4d: %x %x\n", i, a[i], b[i]);

    printf("Simple HVX example %p\n", b);

    return 0;
}
