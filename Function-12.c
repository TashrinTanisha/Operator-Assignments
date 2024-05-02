/*
    Suppose you are planning to make a simple calculator. Your calculator has four functions- add(), subtract(), multiply(),
    divide(). Each of these functions takes two floating point numbers as input and returns the result after applying the
    corresponding operation. Scan different values from the user and test these four functions with these input.
*/

#include<stdio.h>

float add(float n1, float n2)
{

    return n1 + n2 ;
}
float subtract(float n1, float n2)
{

    return n1 - n2 ;
}
float multiply(float n1, float n2)
{

    return n1 * n2 ;
}
float divide(float n1, float n2)
{

    return n1 / n2 ;
}

int main()
{
    float num1, num2 ;

    printf("Enter the value of num1 & num2 : ");
    scanf("%f %f", &num1, &num2);

    float result_add = add(num1, num2);

    float result_subtract = subtract(num1, num2);

    float result_multiply = multiply(num1, num2);

    float result_divide = divide(num1, num2);

    printf("Add : %.2f , Subtract : %.2f , Multiply : %.2f , Divide : %.2f", result_add, result_subtract, result_multiply, result_divide);

    return 0;
}
