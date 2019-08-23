#include <hvx_hexagon_protos.h>
#include <hexagon_protos.h>
#include <hexagon_types.h>
#include <stdio.h>
#include <string.h>

#define N 128

unsigned char a[N], b[N], c[2 * N], d[N] __attribute__ ((aligned(128)));

int main()
{
    HVX_Vector v1, v2, *vptr1, *vptr2;
    HVX_VectorPair v, *vdptr;
    HVX_VectorPred p, *pptr;
    int i;

    memset(a, 0xFF, N);
    memset(b, 0x80, N);

    vptr1 = (HVX_Vector*) a;
    vptr2 = (HVX_Vector*) b;
    vdptr = (HVX_VectorPair*) c;
    pptr = (HVX_VectorPred*) d;

    v1 = *vptr1;
    v2 = *vptr2;
    p = Q6_Q_vcmp_gt_VubVub(v1, v2);
    v = Q6_Wb_vshuffoe_VbVb(v1, v2);
    *vdptr = v;
    *pptr = p;

    for(i = 0; i < N; i++)
        printf("%4d: %02x %02x %02x %02x\n", i, a[i], b[i], c[i], d[i]);

    printf("Simple HVX example %p, %p, %p, %p\n", a, b, c, d);

    return 0;
}
