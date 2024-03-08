#include<stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    float a,b;
    printf("enter the operant(=,-,*,/):");
    scanf("%c" , & c);
    printf("Enter the number\n");
    scanf("%f" , & a);
    printf("Enter the number\n");
    scanf("%f" , & b);
    switch (c)
    {
    case'+':
        printf("%f+%f=%f" , a, b, (a+b));
        break;
        case'-':
        printf("%f-%f=%f" , a, b, (a-b));
        break;
        case'*':
        printf("%f*%f=%f" , a, b, (a*b));
        break;
        case'/':
        printf("%f/%f=%f" , a, b, (a/b));
        break;
    default: printf("chl ghodu ye glt hai");
        break;
    }
    return 0;
}

