#include <stdio.h>
int main()
{
    int i, search, count = 0;
    int arr[20];
    for (i = 0; i < 10; i++)
    {
        printf("enter the elements %d:\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Search the element");
    scanf("%d", &search);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == search)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("element is not repeted");
    }
    else
        printf("element is repeated %d times", count);

    return 0;
}
