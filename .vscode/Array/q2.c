#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[14];
    int i,n=4;
    printf("The elements of the array are:\n");
    for ( i = 0; i < 4; i++)
    {
        printf("element - %d : " ,i);
        scanf("%d", &arr[i]);
    }
    for ( i = n-1; i >= 0; i--)
    {
        printf(" %d" , arr[i]);
    }
    
    return 0;
}