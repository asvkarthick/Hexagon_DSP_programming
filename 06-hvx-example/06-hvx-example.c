#include <hvx_hexagon_protos.h>
#include <hexagon_protos.h>
#include <hexagon_types.h>
#include <stdio.h>
#include <string.h>

#define N 128

unsigned char a[N], b[N], c[2 * N];

int main()
{
    HVX_Vector v1, v2, *vptr1, *vptr2;
    HVX_VectorPair v, *vdptr;
    int i;

    memset(a, 0xFF, N);
    memset(b, 0x80, N);

    vptr1 = (HVX_Vector*) a;
    vptr2 = (HVX_Vector*) b;
    vdptr = (HVX_VectorPair*) c;

    v1 = *vptr1;
    v2 = *vptr2;
    v = Q6_Wb_vshuffoe_VbVb(v1, v2);
    *vdptr = v;

    for(i = 0; i < N; i++)
        printf("%4d: %02x %02x %02x\n", i, a[i], b[i], c[i]);

    printf("Simple HVX example %p, %p, %p\n", a, b, c);

    return 0;
}
