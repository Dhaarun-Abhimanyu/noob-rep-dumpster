#include <stdio.h>
#include "./my_package.h"
int gcd(int a,int b){
    if(b == 0)
        return a;
    return gcd(b,a%b);
}
int main(){
    p("\nEnter two numbers :\n");
    int a = sint();
    int b = sint();
    pi("\nGcd of two numbers : %d",(gcd(a,b)));
    return 0;
}