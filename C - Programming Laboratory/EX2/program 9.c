#include <stdio.h>

void main() {
    int num1,num2;
    float div;
    printf("Enter the numbers in csv format: ");
    scanf("%d,%d",&num1,&num2);
    printf("The sum of the two numbers: %d",num1+num2);
    printf("\nThe difference of the two numbers: %d",num1-num2);
    printf("\nThe product of the two numbers: %d",num1*num2);
    printf("\nThe quotient of the two numbers: %f",((float)num1/num2));
}
