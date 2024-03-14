#include <stdio.h>

int isFibonacci(int n) {
    int a = 0, b = 1, c = 0;
    
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }
    
    if (c == n) {
        return 1; // n is a Fibonacci number
    } else {
        return 0; // n is not a Fibonacci number
    }
}

void printNonFibonacciNumbers(int count) {
    int num = 1;
    int printedCount = 0;
    
    while (printedCount < count) {
        if (!isFibonacci(num)) {
            printf("%d ", num);
            printedCount++;
        }
        num++;
    }
    
    printf("\n");
}

int main() {
    int count;
    
    printf("Enter the number of non-Fibonacci terms to be printed: ");
    scanf("%d", &count);
    
    printf("Non-Fibonacci numbers: ");
    printNonFibonacciNumbers(count);
    
    return 0;
}