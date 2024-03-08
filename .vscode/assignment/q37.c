#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 100;
    printf("The following series is\n");
    while (i != 0)
    {
        printf("%d\n", i);
        i = i - 5;
    }

    return 0;
}
