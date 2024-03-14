#include<stdio.h>
int main(){
    int n;
    while(n%2==0){
        n/=2
    }
    if(n==1){
        printf("It is a power of 2");
    }
    else{
        printf("It is not a power of 2");
    }
    return 0;
}