#include<stdio.h>
int main(){
    int n, sum, digit;
    sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    printf("Sum of digits: %d",sum);
    return 0;
}