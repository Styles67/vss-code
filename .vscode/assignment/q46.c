#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks[] = {3, 4, 7, 89, 5, 7, 81};
    int n=sizeof(marks)/sizeof(marks[0]);
    for (int i = 0; i < 7; i++)
        printf("%d ", marks[i]);
    printf("\n");
    for (int i = n-1; i>=0 ; i--)
    {
        printf("%d ", marks[i]);
    }
    return 0;
}