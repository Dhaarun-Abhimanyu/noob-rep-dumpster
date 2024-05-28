#include <stdio.h>
#include "my_package.h"
int main(){
    p("\nEnter a characater : ");
    char c = schar();
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        p("\nIts a vowel");
    else if(((int)c >= 65 && (int)c <= 90) || ((int)c >= 97 && (int)c <= 122))
        p("\nIts a consonant");
    else if((int)c >= 48 && (int)c <= 57)
        p("\nIts a number");
    else if(c == ' ')
        p("\nIts a blank space");
    else
        p("\nIts a special character");
    return 0;
}