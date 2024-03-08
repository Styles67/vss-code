#include <stdio.h>
int main()
{
    int bs, da, hra, pf, it, ta, nts, others;
    bs = 12000;
    others = 450;
    ta = 120;
    hra = 150;
    da = ((12 * 12000) / 100);
    pf = ((14 * 12000) / 100);
    it = ((15 * 12000) / 100);
    nts = (bs + da + hra + ta + others - (pf + it));
    printf("Net salary of this fresher is %d", nts);
    return 0;
}