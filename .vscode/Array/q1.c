#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[6];
    int i;
    printf("The elements of the array are:\n");
    for ( i = 0; i < 3; i++)
    {
        printf("element - %d : " ,i);
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}
