#include<stdio.h>
int main()
{
    if(5 > 10 - 5 && 5){ // 5 > 5 && 5 // 0 && 5 // 0
        printf("Value is correct\n");

    }else{
        printf("Value is unknown\n");
    }

    return 0;
}
