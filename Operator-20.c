#include<stdio.h>
int main()
{
    if(5 > 10 - 5 && 5)
    {
        /* 10 - 5 = 5,5 is not greater than 5 and the second part is '&& 5' is not evaluated because &&- if the first part is false,
        then the entire expression is false */

        printf("Value is correct");
    }
    else //As the condition for the if statement is false,so the code inside the block is executed
    {
        printf("Value is incorrect");
    }

    return 0;
}
