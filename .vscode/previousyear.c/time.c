#include<stdio.h>
int main()
{
    int in;
    float min,hour;
    printf("enter the time in sec\n");
    scanf("%d",&in);
    min=in/60;
    hour=min/60;
    printf("time in minutes is %f \n%f", min,hour);
    return 0;
}
