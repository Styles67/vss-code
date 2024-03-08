#include<stdio.h>
int getaverage(int arr[],int);
int main()
{
    int avg;
    int a[]={23,45,67,46};
    int size=sizeof(a)/sizeof(a[0]);
    avg=getaverage(a,size);
    printf("the average is %d",avg);
}
int getaverage(int*arr,int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
        sum=sum+arr[i];
    return sum/n;
}