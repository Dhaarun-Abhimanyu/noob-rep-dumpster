#include<stdio.h>
#include<stdlib.h>
int main(){
    float celsius ;
    printf("Enter the celsius value : ");
    scanf("%f",&celsius);
    float f= (9.0/5)*celsius + 32;
    printf("%f fahrenheit",f);
    return 0;
}