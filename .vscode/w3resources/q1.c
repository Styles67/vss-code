#include<stdio.h>
int main()
{
    int i;
    float sum, average;
    for ( i =0; i <=10; i++)
    {
        sum=sum+i;
        average=sum/10;
    }
     printf("%f %f\n",sum,average);
     
    
    return 0;
}
