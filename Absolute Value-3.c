#include<stdio.h>
int main()
{
    int value;

    printf("Enter the value : ");
    scanf("%d", &value);

    int result = abs(value) ;

    printf("Absolute Value is : %d", result);

    return 0;
}
