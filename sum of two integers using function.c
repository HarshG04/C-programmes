#include<stdio.h>
int sum(int a,int b);
int main()
{
    int x,y;
    printf("Enter any two integers: ");
    scanf("%d%d",&x,&y);
    int z = sum(x,y);
    printf("%d",z);
    return 0;
}

int sum(int a,int b)
{
    int c;
    c = a+b;
    return c;
}
