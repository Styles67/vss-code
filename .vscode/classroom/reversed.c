#include <stdio.h>

int main() {
    int num,bum;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
     
       bum=num%10;
           printf("%d ", bum);
        num=num/10;
    } while (num != 0);

    return 0;
}

 /* #include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number\n");
    scanf("%d", &a);
    while (a!=0)

    {
        b=a%10;
        printf("%d" , b);
        a=a/10;
    }
    return 0;
}*/