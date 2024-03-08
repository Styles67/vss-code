#include<stdio.h>
int main()
{
    int units;
    printf("enter the units\n");
    scanf("%d" , &units);
    if (units<=100)
    {
        units=units*3;
        printf("%d is your bill",units);
    }
    else if (units<100,units<=200)
    {
        units=units*5;
        printf("%d is your bill",units);

    }
    else if (units>200, units<=300)
    {
        units=units*10;
        printf("%d is your bill",units);
    }
    return 0;
    
    
    
}