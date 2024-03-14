#include <stdio.h>

void decimalToBinary(int num) {
    if (num == 0) {
        printf("Binary equivalent: 0");
        return;
    }

    int binary = 0, base = 1;

    while (num > 0) {
        binary += (num % 2) * base;
        num /= 2;
        base *= 10;
    }

    printf("Binary equivalent: %d", binary);
}

int main() {
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    decimalToBinary(num);

    return 0;
}