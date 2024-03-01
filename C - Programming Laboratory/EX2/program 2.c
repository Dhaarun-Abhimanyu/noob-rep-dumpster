#include <stdio.h>

void main()
{
    float rad;
    float vol;
    printf("Enter the radius: ");
    scanf("%f", &rad);
    vol = (4.0 / 3.0) * (22.0 / 7.0) * (rad * rad * rad);
    printf("The volume is: %f\n", vol);
}
