#include <stdio.h>
#include <math.h>

void main() {
    int a,b;
    printf("Enter two numbers in csv format: ");
    scanf("%d,%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping: a = %d,b = %d",a,b);
}
