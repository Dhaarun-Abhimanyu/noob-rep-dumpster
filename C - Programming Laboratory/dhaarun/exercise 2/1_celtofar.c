#include <stdio.h>
void main(){
    float cel;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&cel);
    float far = (9.0/5.0)*cel + 32;
    printf("\nTemperature in Fahrenheit : %f", far);
}