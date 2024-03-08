#include<stdio.h>
int main(int argc, char const *argv[])
{
    char n;
    
    printf("Enter the Character\n");
    scanf("%c",&n);
    if (n=='a' || n=='e'|| n=='i'|| n=='o'||n=='u')
    {
        printf("The character is a vowel");
    }
    else{
        printf("the character is not a vowel");
    }

    return 0;
}
