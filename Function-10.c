/*
   Write a function that takes an integer as input and prints Even if the number is divisible by 2,
   otherwise prints Odd. Call this function from the main function.
*/

#include<stdio.h>

void even_or_odd(int num){

     if(num % 2 == 0){
        printf("Even\n");
     }else {
        printf("Odd\n");
      }

}
int main()
{
    even_or_odd(18) ;

    return 0;
}
