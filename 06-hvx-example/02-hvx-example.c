#include <hvx_hexagon_protos.h>
#include <hexagon_protos.h>
#include <hexagon_types.h>
#include <stdio.h>

int main()
{
    HVX_Vector v1, v2;
    HVX_VectorPair v;

    v1 = Q6_V_vzero();
    v2 = Q6_V_vzero();
    v  = Q6_W_vcombine_VV(v1, v2);

    printf("Simple HVX example\n");

    return 0;
}
