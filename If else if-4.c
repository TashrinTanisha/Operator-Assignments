#include<stdio.h>
int main()
{
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    if(x == 5)
    {
        printf("The code is successful\n");
    }
    else if(x == 10)
    {
        printf("It's done!\n");
    }
    else if(x == 15)
    {
        printf("Finished\n");
    }
    else
    {
        printf("Bye!\n");
    }

    return 0;
}
