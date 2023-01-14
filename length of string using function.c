#include<stdio.h>
#include<stdio.h>
int stringln(char ch[]);
int main()
{
    char str[50] ="hii this is a c programe" ;
    int x = stringln(str);
    printf("%d",x);
}

int stringln(char ch[])
{
    int i=0;
    while(ch[i]!= '\0')
    i++;
    return i;

}
