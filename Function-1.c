#include<stdio.h>

int value(int num1, int num2)
{

    int sum = num1 + num2;

    return sum;
}
int main()
{
    int result = value(2, 4);

    printf("Result is : %d\n",result);

    return 0;
}
