#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a[] = "my name is";
    int count = 0, i = 0, space = 0, c = 0;
    while (a[i] != NULL)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            count++;
        }
       else if (a[i] == ' ')
        {
            space++;
        }
        else
        {
            c++;
        }

        i++;
    }
    printf("%d\n %d\n %d", count, space, c);

    return 0;
}
