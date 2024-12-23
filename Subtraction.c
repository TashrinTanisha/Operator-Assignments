#include<stdio.h>
int main()
{
    int num1, num2, result ;

    printf("Enter num1 & num2 :") ;
    scanf("%d %d", &num1, &num2);

    result = num1 - num2 ;

    printf("The result is : %d", result);

    return 0;
}
