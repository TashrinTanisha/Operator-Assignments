/*  Write a program which will take a small letter alphabet as input
    from the user and print whether the alphabet is vowel or consonant
*/
#include<stdio.h>
int main()
{
    char alphabet;

    printf("Enter a small letter alphabet: ");
    scanf("%c", &alphabet);

    if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {

        printf("The alphabet is vowel\n");

    }
    else
    {

        printf("The alphabet is consonant\n");

    }

    return 0;
}
