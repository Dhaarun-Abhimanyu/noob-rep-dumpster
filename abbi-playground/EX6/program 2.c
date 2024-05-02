#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s",&str);
    if (str == strrev(str)){
        printf("It is a palindrome!");
    }
    else{
        printf("It is not a palindrome!");
    }
}

//OUTPUT
//Enter the string: abba
//It is a palindrome!
