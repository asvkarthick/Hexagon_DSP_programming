#include <stdio.h>
#include "hexagon_protos.h"

int main()
{
    long long v1 = 0xFFFF0000FFFF0000;
    long long v2 = 0x0000FFFF0000FFFF;
    long long result;

    // find the minimum for each half-word in 64-bit vector
    result = Q6_P_vminh_PP(v1,v2);
    printf("v1 = %llx\n", v1);
    printf("v2 = %llx\n", v2);
    printf("Result = %llx\n", result);

    v1 = 0x12345678abcdef12;
    v2 = 0xef12abcd56781234;
    // find the minimum for each half-word in 64-bit vector
    result = Q6_P_vminh_PP(v1,v2);
    printf("v1 = %llx\n", v1);
    printf("v2 = %llx\n", v2);
    printf("Result = %llx\n", result);

    return 0;
}
