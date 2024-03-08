#include<stdio.h>
int main(int argc, char const *argv[])
{
    int noob[]= {23,45,67,45,56,57};
    int i,j,k=4,n=6;
    for ( i = 0; i <n; i++)
    {
        printf(" %d", noob[i]);
    }
    j=k;
    n=n-1;
    while (j<n)
    {
        noob[j]=noob[j+1];
        j++;
    }
    printf("\n");
    for ( i = 0; i <n; i++)
    {
        printf(" %d", noob[i]);
    }
    
    

    return 0;
}
