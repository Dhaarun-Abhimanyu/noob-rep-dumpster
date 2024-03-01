#include <stdio.h>

void main() {
    int angle1,angle2;
    printf("Enter the numbers in csv format: ");
    scanf("%d,%d",&angle1,&angle2);
    printf("The third angle is: %d",180-(angle1+angle2));
}
