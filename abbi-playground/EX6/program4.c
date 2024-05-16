#include <stdio.h>
#include <ctype.h>

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d,%d",&a,&b);
    printf("Before swapping: a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping: a=%d,b=%d",a,b);
}

// Enter the numbers: 10,20
// Before swapping: a=10,b=20
// After swapping: a=20,b=10
