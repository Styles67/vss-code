#include <stdio.h>
struct time
{
    int hours;
    int min;
    int sec;
};
int main(int argc, char const *argv[])
{
    struct time time1, time2, result;
    printf("Enter the 1st time in hours,min and sec\n");
    scanf("%d\n%d\n%d", &time1.hours, &time1.min, &time1.sec);
    printf("Enter the 2nd time in hours,min and sec\n");
    scanf("%d\n%d\n%d", &time2.hours, &time2.min, &time2.sec);
    result.sec = time1.sec - time2.sec;
    result.min = time1.min - time2.min - result.sec / 60;
    result.hours = time1.hours - time2.hours - result.min / 60;

    // result.min %= 60;
    // result.hours %= 60;
    printf("the result is as follows\n");
    printf("%d\n%d\n%d\n", result.sec, result.min, result.hours);
    return 0;
}
