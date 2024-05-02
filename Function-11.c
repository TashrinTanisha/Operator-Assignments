/*
   Write a function that takes an integer as input and prints all of it's divisors.
   Call this function from the main function.
*/

#include<stdio.h>

void divisor(int number)
{

    for(int n = 1; n <= number; n++)
    {

        if(number % n == 0 )
        {

            printf("%d\n", n);

        }

    }

}

int main()
{
    divisor(20);

    return 0;
}
