#include <stdio.h>
int main()
{
    int cube, i=1, n;
    printf("enter the number\n");
    scanf("%d", &n);
    while (i <= n)
    {
        cube = (i * i * i);
       
         printf("cube of %d\n is %d\n", i, cube); 
          i++;
    }

   

    return 0;
}
