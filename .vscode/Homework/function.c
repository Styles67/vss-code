#include<stdio.h>
// // int multiply(int a,int b);
// void printstar(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c",'*');
        
//     }


int takenumber()
{
    int i;
    printf("enter a number");
    scanf("%d", &i);
    return i;

}


int main()


{



    int a,b,c;
    // a=12;
    // b=12;
    // c= multiply(a,b);
    b= takenumber();

    printf("number is %d" ,b);

    return 0;
}



