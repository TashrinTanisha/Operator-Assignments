#include<stdio.h>
int main(){
    int integer;

    printf("Enter integer : ");
    scanf("%d",&integer);

    if(integer % 2 == 0){
        printf("Even\n");
    }else{
        printf("Odd");
    }

    return 0;
}