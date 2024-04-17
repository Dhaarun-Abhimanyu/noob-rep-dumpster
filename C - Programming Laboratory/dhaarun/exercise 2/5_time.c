#include <stdio.h>
int main(){
    int hours, minutes;
    printf("Hours : ");
    scanf("%d",&hours);
    printf("Minutes : ");
    scanf("%d",&minutes);
    printf("Total : %d",hours*60+minutes);
    return 0;
}