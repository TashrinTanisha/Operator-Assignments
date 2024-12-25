#include<stdio.h>
int main()
{
    int a = 4;

    printf("value is : %d\n",a++);
    printf("value is : %d\n",++a);

    a = 4;

    printf("value is : %d\n",++a);
    printf("value is : %d\n",a++);

    return 0;
}