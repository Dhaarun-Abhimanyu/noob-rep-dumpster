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

    int pointer = 0;
    while (pointer < strlen(str)) {
        if (str[pointer] == search[0]) {
            start = pointer;
            end = pointer;
            int j;
            for (j = 0; j < strlen(search); j++) {
                if (search[j] == str[pointer + j]) {
                    end++;
                } else {
                    break;
                }
            }
            if (j == strlen(search)) {
                pointer = end;
            }
        }
        pointer++;
    }
    int index = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (i < start || i >= end) {
            new_str[index++] = str[i];
        }
    }
    new_str[index] = '\0';
    printf("\nModified string: %s\n", new_str);
}

//Enter the string: who are you?
// Enter the search word: are
// Modified string: who  you?
