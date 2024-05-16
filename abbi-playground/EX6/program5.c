#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check(int a) {
    int temp = a;
    int rev = 0;
    while (a > 0) {
        int digit = a % 10;
        rev = rev * 10 + digit;
        a /= 10;
    }
    if (temp == rev)
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");
}

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    check(a);
}

// Enter the number: 12321
// It is a palindrome
