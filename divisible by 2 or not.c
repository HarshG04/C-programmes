#include<stdio.h>
int main()
{   int a;
    printf("Enter any integer value = ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("Your value Is Divisible By 2");
    }
    else
    {
      printf("Your value Is Not Divisible By 2"); 
    }
    return 0;
}

