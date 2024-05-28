#include <stdio.h>
#include "my_package.h"
int main(){
    char weekdays[][100] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    p("\nEnter a week number : ");
    int week_number = sint();
    printf("\nThe corresponding weekday : %s",weekdays[week_number%7 - 1]);
    return 0;
}