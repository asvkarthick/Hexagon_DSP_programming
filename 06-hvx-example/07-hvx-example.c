#include <hvx_hexagon_protos.h>
#include <hexagon_protos.h>
#include <hexagon_types.h>
#include <stdio.h>
#include <string.h>

#define N 128

unsigned char a[N], b[N], c[N];

int main()
{
    HVX_VectorPair v1, v2, *vptr1, *vptr2;
    HVX_VectorPair v, *vdptr;
    int i;

    printf("Simple HVX example %p, %p, %p\n", a, b, c);

    memset(a, 0x40, N);
    memset(b, 0x80, N);

    vptr1 = (HVX_VectorPair*) a;
    vptr2 = (HVX_VectorPair*) b;
    vdptr = (HVX_VectorPair*) c;

    v1 = *vptr1;
    v2 = *vptr2;
    v = Q6_Wb_vadd_WbWb(v1, v2);
    *vdptr = v;

    printf("Adding bytes without saturation - Example 1\n");
    for(i = 0; i < N; i++)
        printf("%4d: %02x %02x %02x\n", i, a[i], b[i], c[i]);

    memset(a, 0x80, N);
    memset(b, 0x80, N);
    v1 = *vptr1;
    v2 = *vptr2;
    v = Q6_Wb_vadd_WbWb(v1, v2);
    *vdptr = v;

    printf("Adding bytes without saturation - Example 2\n");
    for(i = 0; i < N; i++)
        printf("%4d: %02x %02x %02x\n", i, a[i], b[i], c[i]);

    v = Q6_Wub_vadd_WubWub_sat(v1, v2);
    *vdptr = v;

    printf("Adding bytes with saturation - Example 3\n");
    for(i = 0; i < N; i++)
        printf("%4d: %02x %02x %02x\n", i, a[i], b[i], c[i]);

    return 0;
}
