#include <stdio.h>
#include <math.h>

void prime(int start, int end) {
    for (int i = start; i <= end; i++) {
        int flag = 0;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d is a prime number\n", i);
    }
}

int main() {
    int start, end;
    printf("Enter the numbers: ");
    scanf("%d,%d", &start, &end);
    prime(start, end);
    return 0;
}

// Enter the numbers:10,20
// 11 is a prime number
// 13 is a prime number
// 17 is a prime number
// 19 is a prime number
