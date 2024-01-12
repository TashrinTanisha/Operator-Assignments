#include<stdio.h>
int main()
{
    if(1 == 2 != 0)  // 0 != 0
    {
        printf("Value is correct");
    }
    else    //As the condition for the if statement is false,so the code inside the block is executed
    {
        printf("Value is unknown");
    }

    return 0;
}
