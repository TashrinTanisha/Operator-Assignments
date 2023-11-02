#include<stdio.h>
int main()
{
    float num1,num2,add;

    printf("Enter num1 & num2 : ");
    scanf("%f %f",&num1,&num2);

    add = num1 + num2;

    printf("Add : %.2f",add);

    return 0;
}