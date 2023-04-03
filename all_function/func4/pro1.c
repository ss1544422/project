#include<stdio.h>
#include"pro1.h"
int main ()
{
   int a,b,c;
   printf("enter 2 numbers: ");
   scanf("%d%d", &a,&b);
   c= sum (a,b);
   printf ("sum=%d\n", c);
   return 0;
}
