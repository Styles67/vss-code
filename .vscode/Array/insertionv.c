#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[]={1,4,6,456,456,45,67,3,45,6,34,56,};
    int n=12,k=3,item=69,j;
    for (int i = 0; i <n; i++)
    printf("%d ",a[i]);
    j=n;
    n=n+1;
    while (j>k)
    {
        a[j]=a[j-1];
        j--;
    }
    a[k]=item;
    printf("\n");
    for (int i = 0; i <n; i++)
    printf("%d ",a[i]);
    
    return 0;
}