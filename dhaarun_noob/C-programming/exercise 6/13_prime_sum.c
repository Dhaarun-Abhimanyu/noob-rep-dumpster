#include <stdio.h>
int isPrime(int x){
    for(int i=2;i<x;i++){
        if(x%i == 0)
            return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(isPrime(i) && isPrime(n-i)){
            printf("\n%d can be expressed as sum of 2 primes = %d + %d",n,i,n-i);
            return;
        }
    }
    printf("\n%d cannot be expressed as sum of 2 primes",n);
    return 0;
}