#include<stdio.h>
int main()
{
    int x = 4;

    printf("Value of x is : %d\n",x++);
    // x++(Post-increment) : The current value of x(4) is printed,then x increments to 5

    printf("Value of x is : %d\n",++x);
    //++x(Pre-increment) : The x increments by 1 to 6,then the updated value of x(6) is printed

    x = 4;

    printf("Value of x is : %d\n",++x);
    //++x(Pre-increment) : The x increments by 1 to 5,then the updated value of x(5) is printed

    printf("Value of x is : %d\n",x++);
    // x++(Post-increment) : The current value of x(5) is printed,then x increments to 6

    return 0;
}
