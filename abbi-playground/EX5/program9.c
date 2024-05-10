#include <stdio.h>
#include <string.h>

void slice(const char *str, char *buffer, size_t start, size_t end) {
    int i = 0;
    while (i <= end - start) {
        buffer[i] = str[i + start];
        i++;
    }
    buffer[i] = '\0';
}

void main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    int start = 0, end = 0;

    while (end <= len) {
        if (str[end] == ' ' || str[end] == '\0') {
            if (end > start && str[end - 1] == 'n') {
                char substring[100];
                slice(str, substring, start, end - 1);
                printf("%s\n", substring);
            }
            start = end + 1;
        }
        end++;
    }
}

// Enter the string: The brown fox jumps over the lazy dog and runs to the mountain.
// brown
// mountain
