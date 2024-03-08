#include <stdio.h>
int main()
{
    int n,i=1;
    printf("enter the number\n");
    scanf("%d" , & n);

    while (n!=i)
    {
        if (n%2==0)
        {
          printf("\n %d", n);
        }
        
        n--;
      
    }
    return 0;
}