#include <stdio.h>
void square(int);
void circle(float);
void rectangle(int, int);
void main()
{
    int s, l, b;
    float r;
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    printf("Enter the side of square : ");
    scanf("%d", &s);
    printf("Enter the length of retangle : ");
    scanf("%d", &l);
    printf("Enter the breadth of retangle : ");
    scanf("%d", &b);
    circle(r);
    square(s);
    rectangle(l, b);
}
void circle(float r)

{
    float area;
    area = 3.14 * r * r;
    printf("\n The area of circle is %f", area);
}
void square(int s)
{
    int ar;
    ar = s * s;
    printf("\n The area of square is %d", ar);
}
void rectangle(int l, int b)
{
    int areas;
    areas = l * b;
    printf("\n The area of rectngle is %d", areas);
}