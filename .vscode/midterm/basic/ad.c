#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b=51,adiff, triple;
    printf("Enter the first value\n");
    scanf("%d" , &a);
    if(a>b)
    {
        adiff=(a-b);
         printf("the adiff is %d", adiff);
        printf("\n");
        triple=3*adiff;
        printf("%d" , triple);  
    }       
    if (b>a)
    {
        adiff=b-a;
        printf("%d" , adiff);
    }
    
    
    return 0;
}
