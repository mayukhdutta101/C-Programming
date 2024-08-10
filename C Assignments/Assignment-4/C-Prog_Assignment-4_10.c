//To take an alphabet as input and check whether it is vowel or consonent.

#include <stdio.h>
#include<ctype.h>
void main() {
    char c,lowerc;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    lowerc = tolower(c);
    if (lowerc == 'a' || lowerc == 'e' || lowerc == 'i' || lowerc == 'o' || lowerc == 'u') {
        printf("%c is a vowel.\n", c);
    } 
    else {
        printf("%c is a consonant.\n", c);
    }
   
}


