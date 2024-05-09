#include <stdio.h>
#include <string.h>

void main()
{
    char str[100],search[100],new_str[100];
    int start,end,flag=0;

    printf("Enter the string: ");
    gets(str);

    printf("Enter the search word: ");
    gets(search);

    int search_len = strlen(search);
    int str_len = strlen(str);
    int new_str_index = 0;
    int i = 0;

    while (i < str_len) {
        int match = 1;
        for (int j = 0; j < search_len; j++) {
            if (str[i + j] != search[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            i += search_len; // Skip the matched word
        } else {
            new_str[new_str_index++] = str[i++];
        }
    }
    new_str[new_str_index] = '\0';

    printf("Modified string: %s\n", new_str);
}

//Enter the string: who are you?
// Enter the search word: are
// Modified string: who  you?
