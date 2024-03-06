#include<stdio.h>
int main(){
    int rad;
    printf("Enter radius of the circle : ");
    scanf("%d",&rad);
    printf("Area of the circle = %.2f\n",3.14*rad*rad);
    printf("Circumference of the circle = %.2f",2*3.14*rad);
    return 0;
}