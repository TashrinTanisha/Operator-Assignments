#include<stdio.h>
int main()
{
    char upper;

    printf("Enter uppercase letter : ");
    scanf("%c",&upper);

    printf("Lowercase letter : %c",upper+32);

    return 0;
}