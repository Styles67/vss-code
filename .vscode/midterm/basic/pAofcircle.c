#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    float area,perimeter;
        printf("Enter the radius of circle : \n");
        scanf("%d" , & r);
        perimeter = 2*3.14*r;
        area= 3.14*r*r;
        printf("The Perimeter is %f\n The area is %f\n" , perimeter,area);


    return 0;
}
