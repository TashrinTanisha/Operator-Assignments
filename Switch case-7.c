#include<stdio.h>
int main()
{
    int x = 2;

    switch(x)
    {

    case 1:
        printf("Value is 1\n");
        break;

    case 2:
        printf("Value is 2\n");
        break;

    case 3:
        printf("Value is 3\n");
        break;
    default:
        printf("Value is unknown\n");
    }

    return 0;
}
