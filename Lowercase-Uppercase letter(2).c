#include<stdio.h>
int main()
{
    char lower,upper;

    printf("Enter lowercase letter : ");
    scanf("%c",&lower);

    upper = tolower(upper);

    printf("Uppercase letter : %c",upper);

    return 0;
}