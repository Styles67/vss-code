#include<stdio.h>
struct person{
    int age;
    int weight;
    int height;
};
int main()
{
    struct person *personptr,person1;
    personptr=&person1;
    printf("ENter the details:\n");
    printf("enter the age\n");
    scanf("%d",&personptr->age);
    printf("enter the weight\n");
    scanf("%d",&personptr->weight);
    printf("enter the height\n");
    scanf("%d",&personptr->height);
    printf("%d\n%d\n%d\n", personptr->age,personptr->weight,personptr->height);
    return 0;
}