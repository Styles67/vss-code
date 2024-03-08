/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int count=0;
    int i=0;
    char a[]="hello guys welcome to my youtube channel";
    while (a[i]!=NULL)
    {
        if (a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u')
        {
            count++;
        }
        i++;
    }
    printf("no. of vowels are %d", count);
    return 0;
}*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int count=0;
    int i=0;
    char a[]="hello guys welcome to my youtube channel";
    while (a[i]!=NULL)
    {
        if (a[i]==' ')
        {
            count++;
        }
        i++;
    }
    printf("no. of vowels are %d", count);
    return 0;
}


