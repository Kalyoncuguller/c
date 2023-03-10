#include <stdio.h>
int main()
{
   int num1,num2,sum;
   int *ptr, *pt;

   printf("Enter first number:");
   scanf("%d", &num1);

   printf("Enter second number:");
   scanf("%d", &num2);   

   ptr = &num1;
   pt = &num2;

   sum = *ptr + *pt;

   printf("Sum of entered numbers: %d",sum);

   return 0;

   }
