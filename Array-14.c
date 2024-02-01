/* Take an array of integer data type of size 5.Scan the values from the user.Now print the
   output like the following one-

   Values in array : 10 25 20 15 30
   Sum of odd numbers:40
   Sum of even numbers:60
*/
#include<stdio.h>
int main()
{
    int number[5], num, even_sum = 0, odd_sum = 0;

    printf("Values in array : ");

    for(num = 0; num < 5; num++)
    {

        scanf("%d",&number[num]);

    }

    for(num = 0; num < 5; num++)
    {

        if(number[num] % 2 == 0)
        {

            even_sum = even_sum + number[num];

        }
        else
        {

            odd_sum = odd_sum + number[num];

        }

    }

    printf("Sum of odd numbers:%d\n", odd_sum);
    printf("Sum of even numbers:%d\n", even_sum);

    return 0;
}
