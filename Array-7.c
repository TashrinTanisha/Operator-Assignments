#include<stdio.h>
int main()
{
    int a[5];

    a[0] = 23,a[1] = 34,a[2] = 12,a[3] = 65,a[4] = 87;

    int b = a[4] - a[2];

    printf("The value of b is : %d",b);

    return 0;
}
