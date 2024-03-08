#include<stdio.h>
int main(int argc, char const *argv[])
{
    int units,n,sur;
    float bill,xbill,totalbill;
    printf("Enter the no.of units\n");
    scanf("%d", &units);
    if(units<50)
    {
        bill=units*0.50;
        printf("%f", bill);
    }
    else if (units>50 && units<150)
    {
        bill=units*0.75;
        printf("%f" , bill);
    }
    else if (units>150 && units<250)
    {
        bill=units*1.20;
        printf("%f" , bill);
    }
    
    else if (units>250)
    {
        bill=units*1.50;
        printf("%f\n" , bill);
    }

    xbill=((20*bill)/100+(10*bill)/100);
    totalbill=bill+xbill;
    printf("total bill is %f", totalbill);

    return 0;
}
