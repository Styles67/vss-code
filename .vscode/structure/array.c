#include <stdio.h>
struct book
{
    char author[20];
    char title[20];
    int id;
    float cost;
};
int main()
{
    struct book b[5];
    for (int i = 0; i < 2; i++)
    {
        scanf("%s", b[i].author);
        scanf("%s", b[i].title);
        scanf("%d", &b[i].id);
        scanf("%f", &b[i].cost);
    }
    printf("\nDISplayed\n");
    for (int j = 0; j < 2; j++)
    {
        printf("%s\n%s\n%d\n%f\n", b[j].author, b[j].title, b[j].id, b[j].cost);
    }
    return 0;
}
