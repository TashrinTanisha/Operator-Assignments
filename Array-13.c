/*Take three arrays [A,B and AB] of float data type of size 5.Scan the values of two arrays[A and B] from the user.
  Now assign the summation of two arrays to the AB.(AB[i] = A[i] + B[i]).
  Finally,print the values of AB array. */

#include <stdio.h>
int main()
{
    float A[5], B[5], AB[5];

    int i;

    printf("Enter the values of A : \n");
    for(i = 0; i < 5; i++)
    {

        printf("A[%d] : ",i);
        scanf("%f",&A[i]);

    }

    printf("Enter the values of B : \n");
    for(i = 0; i < 5; i++)
    {

        printf("B[%d] : ",i);
        scanf("%f",&B[i]);

    }

    for(i = 0; i < 5; i++)
    {

        AB[i] = A[i] + B[i];

    }

    printf("The values of AB array : \n");
    for(i = 0; i < 5; i++)
    {

        printf("AB[%d] : %.2f\n",i,AB[i]);

    }

    return 0;
}

