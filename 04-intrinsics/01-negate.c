#include <stdio.h>
#include "hexagon_protos.h"

int main()
{
    unsigned int val = 0xa5a5a5a5;

    printf("Val = %x\n", val);
    // Negate the input value
    val = Q6_R_neg_R(val);
    printf("Negate Val = %x\n", val);

    return 0;
}
