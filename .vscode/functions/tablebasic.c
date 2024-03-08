#include<stdio.h>
int table(int n);//DECLARATION
int main(){
    int n;
    printf("enter the number :\n");
    scanf("%d",&n);
    table(n);//CALLING
}
int table(int n){//DEFINITION
    for (int i = 1; i <=10 ; i++)
    {
        printf("%d*%d=%d\n", n,i,n*i);
    } 
}