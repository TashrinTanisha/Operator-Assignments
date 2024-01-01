#include<stdio.h>
int main()
{
    int x = 5;

    printf("Value of x is : %d\n",x++); // 5 + 1 = 6
    printf("Value of x is : %d\n",++x); // 1 + 6 = 7

    x = 5;

    printf("Value of x is : %d\n",++x); // 1 + 5 = 6
    printf("Value of x is : %d\n",x++); // 1 + 6 = 7
    printf("Value of x is : %d\n",x);

    return 0;
}
