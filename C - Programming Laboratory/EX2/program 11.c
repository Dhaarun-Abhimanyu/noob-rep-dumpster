#include <stdio.h>

void main() {
    float principle,time,rate;
    printf("Enter the principle amount: ");
    scanf("%f",&principle);
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);
    printf("Enter the time period: ");
    scanf("%f",&time);
    printf("The interest amount is: %f",(rate*principle*time)/100);
}
