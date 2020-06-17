#include <stdio.h>

int main(void)
{
   int x, y;
   printf("Enter first integers:");
   scanf("%d", &x);
   printf("Enter second integers:");
   scanf("%d", &y);
   x = y;


   printf("first = %d\nsecond = %d\n",x ,y);


}