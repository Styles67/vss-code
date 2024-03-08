#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[6];
    int i,sum=0;
    printf("The elements of the array are:\n");
    for ( i = 0; i < 6; i++)
    {
        printf("element - %d : " ,i);
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
       
    }
     printf("The sum is %d" , sum);
    return 0;
}
