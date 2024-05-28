#include <stdio.h>
#include "my_package.h"
int main(){
    int x,y;
    p("\nEnter two numbers :\nx : ");
    x = sint();
    p("y : ");
    y = sint();
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\nAfter swapping:\nx : %d\ny : %d",x,y);
    return 0;
}