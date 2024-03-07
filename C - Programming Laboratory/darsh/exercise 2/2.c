#include<stdio.h>
#include<math.h>
int main(){
    float rad;
    printf("Enter the radius : ");
    scanf("%f",&rad);
    printf("%.2f",(4.0/3)*3.14*pow(rad,3));
    return 0;
}