/*
    Take an array of integer data type of size 10. Get input from the user and store the values in the array
    and finally print the sum of those 10 integers.
*/
#include<stdio.h>
int main()
{
    int nums[10], sum = 0 ;

    printf("Enter the values of the array :") ;
    for(int i = 0; i < 10; i++){

        scanf("%d", &nums[i]) ;

        sum = sum + nums[i] ;

    }

    printf("Sum is : %d\n", sum) ;

    return 0 ;
}
