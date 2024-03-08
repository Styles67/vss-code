#include <stdio.h>
struct book
{
    char author[20];
    char title[20];
    float cost;
};

int main(int argc, char const *argv[])
{
    struct book b1, b2;
    printf("Enter the detail of first book\n");
    scanf("%s\n%s\n%f", b1.author, b1.title, &b1.cost);
    printf("Record is\n");
    printf("%s\n%s\n%f", b1.author, b1.title, b1.cost);
    printf("\nEnter the detail of second book\n");
    scanf("%s\n%s\n%f", b2.author, b2.title, &b2.cost);
    printf("%s\n%s\n%f", b2.author, b2.title, b2.cost);
    if (b1.cost > b2.cost)
    {
        printf("\n book 1 has highest price", b1.cost);
    }
    else
    {
        printf("\n book 2 has highest cost", b2.cost);
    }

    return 0;
}
