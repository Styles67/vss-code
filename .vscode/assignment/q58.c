#include<stdio.h>
int main(int argc, char const *argv[])
{
    char d[]="jashan";
    int i=0;
    while (d[i]!=NULL)
    {
        if (d[i]>=97 && d[i]<=122)
        {
            printf("%d",i);
        }
        i++;
    }
    
    return 0;
}
