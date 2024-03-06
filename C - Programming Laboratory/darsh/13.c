#include<stdio.h>
int main(){
    int a,b;
    a=5;
    b=7;
    printf("a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\na=%d,b=%d",a,b);
    return 0;
}