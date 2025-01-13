/* Take 3 integer variables named a, b and c. Scan the values of these three variables from the user.
   Then store the average of these variables into a new float variable named average. Finally print the output
   like the following example:
   Value of a: 10
   Value of b: 20
   Value of c: 30
   Average of a, b & c: 20.00
*/
#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the values of a, b & c:");
    scanf("%d %d %d", &a, &b, &c);

    float average = (a + b + c) /(float)3 ;

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("Value of c: %d\n", c);
    printf("Average of a, b & c: %.2f\n", average);

    return 0;
}
