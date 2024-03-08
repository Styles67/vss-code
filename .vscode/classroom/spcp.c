#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("enter the selling price\n");
    scanf("%d" , &sp);
    printf("enter the cost price\n");
    scanf("%d", & cp);
    p=sp-cp;
    l=cp-sp;
    if (sp>cp)
    {
        printf("%d is profit",p);
    }
    else{
        printf("%d is loss",l);
    }
    return 0;
    
    
}