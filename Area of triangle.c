#include<stdio.h>
int main()
{
    int base, height, area;

    printf("Enter base : ");
    scanf("%d", &base);

    printf("Enter height : ");
    scanf("%d", &height);

    area = 0.5 * base * height ;

    printf("The area is : %d", area) ;

    return 0;
}
