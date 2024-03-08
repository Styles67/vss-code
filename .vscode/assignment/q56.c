#include<stdio.h>
int main(int argc, char const *argv[])
{
    char j[]="jashan";
    int  i=0;
    while (j[i]!=NULL)
    {
        i++;
    }
    printf("the length of srting is %d", i);
    
    return 0;
}
