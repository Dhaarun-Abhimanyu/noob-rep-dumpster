#include <stdio.h>

void main()
{
    float val;
    printf("Enter the scale: ");
    scanf("%f",&val);
    if (val<5.0){
        printf("Little or no damage!");
    }
    else if (5.0<val<5.5){
        printf("Some damage");
    }
    else if (5.5<=val<6.5){
        printf("Serious damage!");
    }
    else if (6.5<=val<7.5){
        printf("Disaster!");
    }
    else{
        printf("Catastrophe!");
    }
}
