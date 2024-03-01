#include <stdio.h>

void main() {
    int hour, mins;
    printf("Enter the hours: ");
    scanf("%d", &hour);
    printf("Enter the minutes: ");
    scanf("%d", &mins);
    printf("The total minutes is: %d\n", hour * 60 + mins);
}

