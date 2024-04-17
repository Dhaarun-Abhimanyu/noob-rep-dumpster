#include <stdio.h>
void main(){
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    float volume = (4.0/3)*3.14*(radius*radius*radius);
    printf("Volume of sphere : %.2f",volume);
}