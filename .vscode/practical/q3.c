#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,z;
    printf("enter x,y,z");
    scanf("%d%d%d",&x,&y,&z);
    if ( y>x && z>y )
    {
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
