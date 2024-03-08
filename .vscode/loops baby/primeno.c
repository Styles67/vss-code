#include <stdio.h>
int main(int argc, char const *argv[])
{
    int  m,flag=0;
    printf("Ente a nmber\n");
    scanf("%d", &m);
    for (int i = 2; i <=m/2; ++i)
    {
        if (m%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("%d is a prime no." , m);
    }
    else{
        printf("%d i not a prime" , m);
    }
    
    
   

    

    return 0;
}
