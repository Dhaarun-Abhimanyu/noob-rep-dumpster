#include <stdio.h>
void swap_by_value(int x,int y){
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\nCall by value swap:\nx = %d, y = %d",x,y);
}
void swap_by_reference(int* x, int* y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main(){
    int a,b;
    int *x=&a,*y=&b;
    printf("\nEnter two numbers separeted by commas : ");
    scanf("%d,%d",x,y);
    swap_by_value(*x,*y);
    swap_by_reference(x,y);
    printf("\nCall by reference swap :\nx = %d,y = %d",*x,*y);
    return 0;
}