#include <stdio.h>
#include "hexagon_protos.h"

int main()
{
    unsigned int top1_i = 0x01020304;
    unsigned int top2_i = 0x05060708;
    unsigned int bot1_i = 0x0a0b0c0d;
    unsigned int bot2_i = 0x0e0f1011;
    unsigned long long top1_ll, top2_ll, bot1_ll, bot2_ll;

    top1_ll = Q6_P_vzxtbh_R(top1_i);
    top2_ll = Q6_P_vzxtbh_R(top2_i);
    bot1_ll = Q6_P_vzxtbh_R(bot1_i);
    bot2_ll = Q6_P_vzxtbh_R(bot2_i);

    printf("Top1 int = %08x\n", top1_i);
    printf("Top2 int = %08x\n", top2_i);
    printf("Bot1 int = %08x\n", bot1_i);
    printf("Bot2 int = %08x\n", bot2_i);

    printf("Top1 long long = %016llx\n", top1_ll);
    printf("Top2 long long = %016llx\n", top2_ll);
    printf("Bot1 long long = %016llx\n", bot1_ll);
    printf("Bot2 long long = %016llx\n", bot2_ll);

    return 0;
}
