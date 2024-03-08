#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("enter the year baby\n");
    scanf("%d",&year);
    if (year% 400==0 || (year %4 ==0 && year % 100 !=0))
    {
        printf("%d is a leap year", year);
    }
    else{
        printf("%d not a leap year",year);
    }
    return 0;
}
