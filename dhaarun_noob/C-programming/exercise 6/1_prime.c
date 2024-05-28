#include <stdio.h>
#include "my_package.h"
int isPrime(int x){
    for(int i=2;i<x;i++){
        if(x%i == 0)
            return 0;
    }
    return 1;
}
int main(){
    int a,b;
    p("\nEnter two numbers separated by commas : ");
    scanf("%d,%d",&a,&b);
    p("\nList of prime numbers : ");
    for(int i=a+1;i<b;i++){
        if(isPrime(i))
            printf("%d,",i);
    }
    return 0;
}