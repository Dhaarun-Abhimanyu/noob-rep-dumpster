#include<stdio.h>
int main(){
    int a,b;
    printf("Input two angles : ");
    scanf("%d,%d",&a,&b);
    printf("Third angle = ",180-(a+b));
    return 0;
}