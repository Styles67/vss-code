#include <stdio.h>
struct address
{
    char author[20];
    char title[20];
    int id;
};
struct employee
{
    char name[32];
    struct address add;
};

int main()
{
    struct employee b;
    scanf("%s\n", b.name);
    scanf("%s\n", b.add.author);
    scanf("%s\n", b.add.title);
    scanf("%d\n", &b.add.id);
    printf("ha bhai\n");
    printf("%s\n%s\n%s\n%d", b.name, b.add.author, b.add.title, b.add.id);
    return 0;
}