#include<stdio.h>
int main()
{
   int num1,num2,result;
  
   float avg;

   printf("Enter num1 & num2 : ");
   scanf("%d %d",&num1,&num2);

   result = num1 + num2;

   printf("Add : %d",result);

   result = num1 - num2;

   printf("Substract : %d",result);

   result = num1 * num2;

   printf("Multiply : %d",result);

   result = num1 / num2;

   printf("Division : %d",result);

   return 0;
}