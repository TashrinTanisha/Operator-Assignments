#include<stdio.h>
int main()
{
    int age;

    printf("Enter age of the person: ");
    scanf("%d", &age);

    if(age < 2){
        printf("Infant\n");
    }else if(age < 10){
        printf("Child\n");
    }else if(age < 20){
        printf("Teenager\n");
    }else if(age < 30){
        printf("Adult\n");
    }else {
        printf("Old\n");
    }

    return 0;
}
