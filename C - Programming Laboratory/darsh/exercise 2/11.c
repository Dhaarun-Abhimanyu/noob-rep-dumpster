#include<stdio.h>
int main(){
    int time,prin;
    float rate;
    printf("enter comma separated values for principle,time,rate : ");
    scanf("%d,%d,%f",&prin,&time,&rate);
    printf("simple interest = %.2f",(prin*time*rate)/100);
    return 0;
}