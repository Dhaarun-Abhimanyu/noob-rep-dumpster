#include <stdio.h>
int main(){
    float kil,mile;
    printf("Enter kilometer : ");
    scanf("%f",&kil);
    mile = 0.6213712*kil;
    printf("Mile : %.2f",mile);
    return 0;
}