/*Say you are given the following array of integer data type-{-99,45,100,37,89,-327,245}.
  Now write a program which will find the biggest integer and print the integer value. */

#include<stdio.h>
int main()
{
    //Array of integer data type of size 7
    int integer[7] = {-99,45,100,37,89,-327,245};

    //Declare two variables of integer data type called max and i
    int max = integer[0],i;

    //Start a for loop from 0,increases by 1,until less than 7
    for(i = 1; i < 7; i++)
    {

        //Find the biggest integer
        if(integer[i] > max)
        {
            max = integer[i];
        }
    }

    //Print the integer value
    printf("The biggest value is : %d\n",max);

    return 0;
}
