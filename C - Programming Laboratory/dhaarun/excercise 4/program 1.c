#include <stdio.h>


int isAlpha(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
int isDigit(char c) {
    return (c >= '0' && c <= '9');
}


void main() {
    char str[100];
    int alphabets = 0, digits = 0, special = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            alphabets++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (str[i] != ' ' && str[i] != '\n') {
            special++;
        }
        i++;
    }
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
}
