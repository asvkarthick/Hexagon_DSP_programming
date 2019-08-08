#include <hvx_hexagon_protos.h>
#include <hexagon_protos.h>
#include <hexagon_types.h>
#include <stdio.h>

int main()
{
    HVX_Vector v1;

    v1 = Q6_V_vzero();

    printf("Simple HVX example\n");

    return 0;
}
