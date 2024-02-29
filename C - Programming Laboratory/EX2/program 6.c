#include <stdio.h>

void main() {
    int mins,hours,rem_mins;
    printf("Enter the total minutes: ");
    scanf("%d",&mins);
    hours = mins/60;
    rem_mins = mins%60;
    printf("Hours: %d",hours);
    printf("\nMinutes: %d",rem_mins);
}
