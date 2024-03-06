#include<stdio.h>
int main(){
    float width,height;
    printf("Enter width:");
    scanf("%f",&width);
    printf("enter height : ");
    scanf("%f",&height);
    printf("Perimeter of the rectangle : %.2f",2*(width + height));
    return 0;
}