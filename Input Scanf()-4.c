/*  Take 3 integer variables named a, b and c. Scan the values of
    these three variables from the user. Then store the average of
    these three variables into a new float variable named average.
    Finally print the output like the following example:

    Value of a: 10
    Value of b: 20
    Value of c: 30
    Average of a, b and c: 20.00
*/
#include<stdio.h>
int main()
{
    float a, b, c;

    printf("Enter the value of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    float average = (a + b + c) / 3;

    printf("Average of a, b and c: %.2f\n", average);

    return 0;
}
