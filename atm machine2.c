#include <stdio.h>

int main()
{
   int ammount,a,b,c;
   printf("Enter Your Ammount :");
   scanf("%d",&ammount);
   
   ammount = ammount-100;
   
   a = ammount/2000; 
   ammount = ammount%2000;
   
   b = ammount/500;
   ammount = ammount%500;
   
   c = (ammount/100)+1;
   
   printf("Ammount       No. Of Notes\n");
   printf(" 2000             %d\n",a);
   printf(" 500              %d\n",b);
   printf(" 100              %d\n",c);
   
   return 0;
   
}


