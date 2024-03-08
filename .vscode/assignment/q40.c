#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[]={4,6,7,8,100};
    int n= sizeof(a)/sizeof(a[0]);
    int index=3;
    for (int i = 0; i <n; i++)
    {
        if (i==index)
        {
            printf("%d",a[i]);
        }
        
    }
    

    return 0;
}
