#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);
    printf("Powers of the given integers : \n");
    printf("n^1 = %d\n",a);
    printf("Square term(n^2) = %.0f\n",pow(a,2));
    printf("Cube term(n^3) = %.0f",pow(a,3));
    return 0;
}