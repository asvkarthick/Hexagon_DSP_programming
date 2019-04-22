#include <stdio.h>
#include "hexagon_protos.h"

int main()
{
    unsigned char r1 = 0x80;
    unsigned short r2 = 0x8000;
    unsigned int res;

    printf("Sign extend the least significant byte\n");
    res = Q6_R_sxtb_R(r1);
    printf("Input = %x\n", r1);
    printf("Result = %x\n", res);

    printf("Sign extend the least significant half word\n");
    res = Q6_R_sxth_R(r2);
    printf("Input = %x\n", r2);
    printf("Result = %x\n", res);
    return 0;
}
