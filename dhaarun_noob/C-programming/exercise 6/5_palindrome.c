#include <stdio.h>
#include "my_package.h"
int main(){
    p("\nEnter a number : ");
    int x = sint();
    int temp = x,rev=0;
    while(temp != 0){
        rev = rev*10 + temp%10;
        temp/=10;
    }
    if(x == rev)
        p("\nIts a palindrome");
    else
        p("\nIts not a palindrome");
    return 0;
}
    /*
    int main(){
        printf("\nIts a palindrome);
        return 0;
    }
    */