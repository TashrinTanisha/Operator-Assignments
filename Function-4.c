//  Add two integers using User-defined function

#include<stdio.h>
int numbers(int num1, int num2); // function prototype

int main()
{
    int n1, n2, sum;

    printf("Enter n1 & n2 : ");
    scanf("%d %d",&n1,&n2);

    sum = numbers(n1, n2);  // function call

    printf("Sum is : %d\n",sum);

    return 0;
}

int numbers(int num1, int num2)  //function defination
{

    int result = num1 + num2;

    return result;

}
