#include<stdio.h>

int nums(int n1, int n2)
{

    int sum = n1 + n2 ;

    return sum;

}

void name()
{

    printf("Tashrin Tarannum Tanisha Ishq\n") ;

}
int main()
{
    name() ;

    int result = nums(20, 40);

    printf("Sum is : %d\n", result) ;

    return 0;
}
