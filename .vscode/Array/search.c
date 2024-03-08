#include<stdio.h>
int main(int argc, char const *argv[])
{
    int noob[]= {23,45,67,45,56,57};
    int j=0,k=67;
    while (j<6)
    {
        if (noob[j]==k)
        {
            break;
        }
        j=j+1;
    }
    printf("%d at position %d", k,j+1);
    return 0;
}