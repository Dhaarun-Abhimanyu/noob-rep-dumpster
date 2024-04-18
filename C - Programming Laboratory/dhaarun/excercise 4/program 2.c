#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    int left = 0, right;

    printf("Enter a string: ");
    scanf("%99s", str);
    right = strlen(str) - 1;
    while (left < right && str[left] == str[right]) {
        left++;
        right--;
    }

    if (left >= right) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}
