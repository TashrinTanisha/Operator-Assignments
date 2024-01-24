/*Take an array of integer data type of size 10.Get input from the user and store the values in the array and
  finally print the sum of those 10 integers. */

#include<stdio.h>
int main()
{
    //Take an array of integer data type of size 10 and declare other necessary variables
    int value[10],v,sum = 0;

    //Start a loop from 0,increases by 1,until less than 10
    printf("Enter the value : ");
    for(v = 0; v < 10; v++)
    {

        //Get input from the user and store the values in the array
        scanf("%d",&value[v]);

    }

    //Start the second loop from 0,increases by 1,until less than 10
    for(v = 0; v < 10; v++)
    {

        //Calculate the sum
        sum = sum + value[v];

    }

    //Finally print the sum of those 10 integers
    printf("The sum is : %d\n",value[v]);

    return 0;
}
