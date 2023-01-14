#include<stdio.h>
void scanAr(int ar[],int x);
void printAr(int ar[],int x);

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    scanAr(a,n);
    printAr(a,n);
}

void scanAr(int ar[],int x)
{
    for(int i=0;i<x;i++)
    scanf("%d",&ar[i]);
}
void printAr(int arr[],int y)
{
    for(int i=0;i<y;i++)
    printf("%d ",arr[i]);
}
