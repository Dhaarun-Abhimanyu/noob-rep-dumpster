#include <stdio.h>
#include <math.h>

void main() {
    float principal,time,rate,amount,compound_interest;
    printf("Enter the principle amount: ");
    scanf("%f",&principal);
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);
    printf("Enter the time period: ");
    scanf("%f",&time);
    amount = principal * exp(rate/100 * time);
    compound_interest = amount - principal;
    printf("%f",compound_interest);
}
