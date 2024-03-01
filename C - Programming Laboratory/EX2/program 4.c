#include <stdio.h>

void main()
{
    float kmph;
    printf("Enter the speed in Km/hr: ");
    scanf("%f",&kmph);
    printf("The speed in m/hr: %f",kmph*0.621371);
}
