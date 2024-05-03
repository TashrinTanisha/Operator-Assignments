#include<stdio.h>
int main()
{
    int num[6] ;

    for(int i = 0; i < 6; i++)
    {

        scanf("%d", &num[i]) ;

    }

    for(int I = 0; I < 6; I++){

        printf("num[%d] = %d\n", I, num[I]) ;

    }

    return 0 ;
}

