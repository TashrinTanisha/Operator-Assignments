#include<stdio.h>
int main()
{
    char my_name[50] ;

    printf("Enter name : ");
    fgets(my_name, sizeof(my_name), stdin) ;

    printf("%s\n", my_name);

    return 0;
}
