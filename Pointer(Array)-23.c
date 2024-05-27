#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50} ;

    int *ptr = &a[3] ;

    printf("%d\n", *ptr) ;
    printf("%d\n", *(ptr + 1)) ;
    printf("%d\n", *(ptr - 1)) ;

    return 0 ;
}
