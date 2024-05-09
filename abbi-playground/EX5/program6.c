#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    printf("Enter the string: ");
    gets(str);
    int count_words = 0, count_vowels = 0, count_consonants = 0;
    for (int i = 0; i < strlen(str); i++) {
        int flag = 0;
        if (str[i] == ' ')
            count_words += 1;
        for (int j = 0; j < 5; j++) {
            if (tolower(str[i]) == vowels[j])
                flag = 1;
        }
        if (flag == 1)
            count_vowels += 1;
        else if (str[i] >= 'a' && str[i] <= 'z')
            count_consonants += 1;
    }
    printf("Total words: %d\n", count_words + 1);
    printf("Total vowels: %d\n", count_vowels);
    printf("Total consonants: %d\n", count_consonants);

    return 0;
}

// Enter the string: Jack and Jill went up the hill
// Total words: 7
// Total vowels: 7
// Total consonants: 15
