/* Take a two dimensional array of integer data type of size [3 * 3].
   Take the values from the user using scanf(). Now print the average of all the values.
*/
#include<stdio.h>
int main()
{
    int value[3][3], r, c, sum = 0;

    printf("Enter the values : ");

    for(r = 0; r < 3; r++) // for row
    {

        for(c = 0; c < 3; c++) // for column
        {

            scanf("%d",&value[r][c]);

        }

    }

    for(r = 0; r < 3; r++) // for row
    {

        for(c = 0; c < 3; c++) // for column
        {

            sum = sum + value[r][c];

        }

    }

    float average = (float)sum / 9 ;

    printf("The average is : %.2f\n",average);

    return 0;
}
