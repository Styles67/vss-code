#include <stdio.h>
int main(int argc, char const *argv[])
{
    float f, km, m, cm, inch;
    printf("ENter the distance in km\n");
    scanf("%f", &km);
    m = (km * 1000);
    printf("Distance in km is %.2f", m);
    cm = (m * 100);
    printf("\n Distance in km is %.2f", cm);
    inch = cm / 2.54;
    printf("\n Distance in km is %.2f", inch);
    f = inch / 12;
    printf("\n Distance in km is %.2f", f);
    return 0;
}
