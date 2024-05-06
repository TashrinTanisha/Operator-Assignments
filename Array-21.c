#include<stdio.h>
int main()
{
    int a[4] = {4,8,12,16} ;

    for(int i = 0; i < 4; i++)
    {

        printf("%u\n", &a[i]);

    }

    return 0 ;
}
