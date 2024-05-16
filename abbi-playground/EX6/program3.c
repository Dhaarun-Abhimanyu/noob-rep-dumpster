#include <stdio.h>
#include <ctype.h>

void check(char letter) {
    char vowels[] = {'a','e','i','o','u'};
    int flag = 0;
    for (int i=0;i<5;i++){
        if (tolower(letter) == vowels[i]){
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("It is a consonant");
    else
        printf("It is a vowel");
}

int main() {
    char letter;
    printf("Enter the letter: ");
    scanf("%c",&letter);
    check(letter);
}

// Enter the letter: B
// It is a consonant
