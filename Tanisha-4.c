#include<stdio.h>
int main()
{
    //Area of circle

    //Take two variables called radius & area

    int radius;
    float area;

    //Input the radius

    printf("Enter radius : ");
    scanf("%d",&radius);

    // Calculate the area

    area = 3.1416 * radius * radius;

    // Print the area of circle

    printf("Area of circle : %f",area);

    return 0;
}
