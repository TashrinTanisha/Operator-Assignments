#include<stdio.h>
int main(){
    char alphabet;

    printf("Enter alphabet : ");
    scanf("%c",&alphabet);

    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'){
       printf("Vowel\n");
    }else{
       printf("Consonant"); 
    }

    return 0;
}