#include <stdio.h>
int main(){
    int minutes,hours,min;
    printf("Enter minutes : ");
    scanf("%d",&minutes);
    printf("%d Hours, %d minutes",minutes/60,minutes-60*(minutes/60));
    return 0;
}