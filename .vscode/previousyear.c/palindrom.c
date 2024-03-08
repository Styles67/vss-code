/*#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, n;
    printf("enter the no.\n");
    scanf("%d", &n);
    x=n;
    while (n != 0)
    {
        x = n % 10;
        n = n / 10;
        printf("%d" , x);
    }
    if (n==x)
    {
        printf("\n %d is palidrome", x);
    }
    else{
        printf("\n %d is not palidrome", x);
    }

    return 0;
}*/


#include <stdio.h>

int main() 
{
    int num, rem, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0) {
        rem = temp % 10;
        sum = (sum * 10) + rem;
        temp = temp / 10;
    }

    if(num == sum) {
        printf("%d is a palindrome.", num);
    } else {
        printf("%d is not a palindrome.", num);
    }

    return 0;
}
