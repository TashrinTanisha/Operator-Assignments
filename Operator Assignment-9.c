#include<stdio.h>
int main()
{
    float c,F;

    printf("Enter fahrenheit : ");
    scanf("%f",&F);

    c = (F-32)/1.8;

    printf("Celsius : %.2f",c);

    return 0;
}