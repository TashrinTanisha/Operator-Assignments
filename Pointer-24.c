#include<stdio.h>
int main()
{
    int t = 14, *p = &t ;

    printf("Output = %p\n", &t);

    printf("Output = %p\n", p);

    printf("Output = %d\n", *p);

    printf("Output = %d\n", t);

    return 0;
}
