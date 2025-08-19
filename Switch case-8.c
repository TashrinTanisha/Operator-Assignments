#include<stdio.h>
int main()
{
    char ch = 'a';

    switch(ch){

    case 'a':
             printf("Value is a\n");
             printf("It's working!");
             break;
    case 'b':
             printf("Value is b\n");
             break;
    case 'c':
             printf("Value is c\n");
             printf("It's working!");
             break;
    default:
             printf("Value is unknown\n");
    }

    return 0;
}
