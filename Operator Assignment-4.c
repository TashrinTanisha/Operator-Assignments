#include<stdio.h>
int main()
{
    float base,height,area;

    printf("Enter base & height : ");
    scanf("%f %f",&base,&height);

    area = 0.5 * base * height;

    printf("Area : %f",area);

    return 0;
}