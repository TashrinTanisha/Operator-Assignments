#include<stdio.h>
int main()
{
    int a[4] = {4,8,12,16} , sum = 0 ;

    for(int i = 0; i < 4; i++){

          sum = sum + *(a + i) ;

    }

    printf("Sum is : %d\n", sum) ;

    return 0 ;
}
