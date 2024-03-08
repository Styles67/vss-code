#include<stdio.h>

int main()
{
    int subject;
    
    printf("enter your subject you passed\n"
    "1. Maths &Science\n"
    "2. Maths\n"
    "3. Science\n");

    scanf("%d", &subject);
  


    if(subject==1)
    {
        printf("your rewar is 45$");
    }
    else if(subject==2)
    {
        printf( "reward is 15$");

    }
    else if(subject==3)
    {
        printf("reward is 15$");
    }
    return 0;
}









    