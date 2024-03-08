#include<stdio.h>
int main(int argc, char const *argv[])
{
    int b,e,p=1;
    printf("base\n");
    scanf("%d",&b);
    printf("expo\n");
    scanf("%d",&e);
    for (int i = 0; i < e; i++)
    {
        p=p*b;
    }
    printf("%d",p);
    return 0;
}
