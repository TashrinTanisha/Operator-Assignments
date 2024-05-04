/*
    Say you are given the following array of integer data type- {-99,45,100,-327,89,37,245}.
    Now write a program which will find the biggest integer value and print the value.
*/
#include<stdio.h>
int main()
{
    int num[7] = {-99,45,100,-327,89,37,245} ;

    int max = num[1] ;

    for(int i = 0; i < 7; i++)
    {

        if(num[i] > max)
        {

            max = num[i] ;

        }

    }

    printf("The biggest value is : %d\n", max) ;

    return 0 ;
}
