#include<stdio.h>
int cuber(int n);
int main()
{
    int x;
    printf("enter any integer value: ");
    scanf("%d",&x);
    int y = cuber(x);
    printf("%d",y);
}
int cuber(int n)
{
    return n*n*n;
}
