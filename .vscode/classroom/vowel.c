#include<stdio.h>
int main()
{
    char vowel;
    printf("enter the alphabet\n");
    scanf("%c", &vowel);
    if(vowel=='a' || vowel=='A')
    {
        printf("%c is a vowel" , vowel);
    }
    else if(vowel=='e' || vowel=='B')
    {
        printf("%c is a vowel" , vowel);
    }
    else if(vowel=='i' || vowel=='I')
    {
        printf("%c is a vowel" , vowel);
    }
    else if(vowel=='o' || vowel=='O')
    {
        printf("%c is a vowel" , vowel);
    }
    else if(vowel=='u' || vowel=='U')
    {
        printf("%c is a vowel" , vowel);
    }
    else{
        printf("%c is not a vowel" ,vowel);
    }
    return 0;
    }
