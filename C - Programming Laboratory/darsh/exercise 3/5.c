#include<stdio.h>
int main(){
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    int leap = 1 ? ((year%4==0 && year%100!=0) || year%400==0) : 0;
    if(leap)
        printf("Leap year");
    else
        printf("Not a leap year");
    return 0;
}