#include<stdio.h>
int numbers(int num1, int num2)
{

    int multiplication = num1 * num2 ;

    return multiplication;

}
void age()
{

    printf("14year\n");

}
int main()
{
    printf("The program starts from main function\n");

    age();

    int result = numbers(12, 2);

    printf("The result is : %d\n",result);

    return 0;
}
