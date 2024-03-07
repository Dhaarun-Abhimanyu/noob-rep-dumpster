#include<stdio.h>
int main(){
    float kilo;
    printf("Enter the kilometer : ");
    scanf("%f",&kilo);
    printf("%.2f miles per hour",kilo*0.621371);
    return 0;
}