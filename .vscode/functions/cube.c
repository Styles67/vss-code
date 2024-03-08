#include<stdio.h>
int cube(int);
int main(){
    int a,c;
    printf("Enter the number you lodu\n");
    scanf("%d",&a);
    c=cube(a);
    printf("The cube of %d is %d",a,c);
}
int cube(int a)
{
    return a*a*a;
}