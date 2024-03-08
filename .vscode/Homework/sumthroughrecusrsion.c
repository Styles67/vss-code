#include <stdio.h>
int sum(number)
{
    if (number==1)
        return 1;
    else
    {
        return number + sum(number-1);
    }
}

int main()
{
    int numb;
    printf("enter the number noob\n");
    scanf("%d", &numb);
    printf("the sum of %d issssss %d",numb,sum(numb));
    return 0;
    
}




