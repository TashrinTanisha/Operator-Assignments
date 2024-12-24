#include<stdio.h>
#include<math.h>
int main()
{
    double x = 5.55;

    double rounding = round(x);
    
    printf("Rounding(%.2lf) = %.3lf",x,rounding);

    return 0;
}