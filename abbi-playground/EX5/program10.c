#include <stdio.h>
#include <string.h>

void slice(const char *str, char *buffer, size_t start, size_t end) {
    int i = start;
    int j = 0;
    while (i <= end) {
        buffer[j++] = str[i++];
    }
    buffer[j] = '\0';
}

void main() {
    char str[100];
    char words[10][20]; 
    char newString[10][20];
    char buffer[20];
    printf("Enter the string: ");
    gets(str);

    int wordCount = 0;
    int start = 0;
    int end = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            end = i - 1;
            slice(str, buffer, start, end);
            strcpy(words[wordCount], buffer);
            start = i + 1;
            wordCount++;
        }
    }
    // Copy the last word
    slice(str, buffer, start, strlen(str) - 1);
    strcpy(words[wordCount], buffer); 
    wordCount++;

    for (int i = 0; i < wordCount; i++) {
        for (int j = i + 1; j < wordCount; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                words[j][0] = '\0'; 
            }
        }
    }

    int newWordCount = 0;
    for (int i = 0; i < wordCount; i++) {
        if (words[i][0] != '\0') {
            strcpy(newString[newWordCount], words[i]);
            newWordCount++;
        }
    }

    for (int i = 0; i < newWordCount; i++) {
        printf("%s ", newString[i]);
    }
}
