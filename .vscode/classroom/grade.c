#include <stdio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    if (n >= 90)
    {
        printf("grade is a");
    }

    else if (n >= 80 && n < 89)
        
    {
        printf("grade is b");
    }

    else if (n >= 70 && n < 79)
    {
        printf("grade is c");
    }

    else if (n >= 60 && n < 69)
    {
        printf("grade is d");
    }
    else if (n >= 50 && n < 59)
    {
        printf("grade is e");
    }
    else if (n >= 30 && n < 59)
    {
        printf("grade is f");
    }
    else
    {
        printf("grade g");
    }
    return 0;
}