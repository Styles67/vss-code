#include<stdio.h>
int feh(int);
int main()
{
    int c,f;
    printf("Enter the temperature in fehranite\n");
    scanf("%d", &c);
    f=feh(c);
    printf("temperature in fehranite is %d",f);
}
int feh(int c){
    return ((9/5*c) + 32);
}