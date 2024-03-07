#include<stdio.h>
#include<math.h>
int main(){
    int p,n,t;
    float rate;
    printf("values for p,n,t,r : ");
    scanf("%d,%d,%d,%f",&p,&n,&t,&rate);
    float ci;
    ci = p* pow((1+(rate/n)),n*t);
    printf("%.2f",ci);
    return 0;
}