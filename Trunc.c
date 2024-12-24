#include<stdio.h>
#include<math.h>
int main()
{
    double x = 5.55;

    double result = trunc(x);
    
    printf("Result(%.2lf) = %.3lf",x,result);

    return 0;
}