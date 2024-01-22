#include<stdio.h>
int main()
{
    int x[2];

    printf("Enter the value of x[0] : ");
    scanf("%d",&x[0]);

    printf("Enter the value of x[1] : ");
    scanf("%d",&x[1]);

    int z = x[0] + x[1] ;

    printf("The value of z is : %d",z);

    return 0;
}
