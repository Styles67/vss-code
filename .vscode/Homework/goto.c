#include<stdio.h>
int main()
{
    int num;
    for (int i= 0; i < 7; i++)
    {
        printf("enter 5 to exit the statement\n");
        scanf("%d", &num);
        if(num==5)
        goto end;
    }
    end:
}