#include <stdio.h>
void namaste();
void b();
int main()
{
    char a;
    printf("enter the character either f or i\n");
    scanf("%c", &a);
    if (a == 'f')
    {
        namaste();
    }
    else
    {
        b();
    }
    return 0;
}
void namaste()
{
    printf("namaste");
}
void b()
{
    printf("bonjour");
}