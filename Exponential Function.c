#include<stdio.h>
int main()
{
    double x = 1;

    double exponent = exp(x);
    
    printf("Exponent(%lf) = %.3lf",x,exponent);

    return 0;
}