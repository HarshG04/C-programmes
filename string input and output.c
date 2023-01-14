#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Insert elements in your string: \n");
    fgets(str,50,stdin);
    printf("This is your string: \n");
    fputs(str,stdout);
}
