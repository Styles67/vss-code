#include<stdio.h>
int main(int argc, char const *argv[])
{
    int days,weeks,years, rw;
    printf("Enter the no of days :\n");
    scanf("%d" , &days);
    years=days/365;
    weeks=((days-(years*365))/7);
    rw=days-((years*365)+(7*weeks));
    printf("%d %d %d" ,years , weeks, rw);
    

    return 0;
}
