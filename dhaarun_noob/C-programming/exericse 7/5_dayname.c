#include <stdio.h>
char* day_name(int n){
    static char *names[10] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    return *(names + n%7);
}
int main(){
    int n;
    printf("\nEnter day number : ");
    scanf("%d",&n);
    printf("\nCorresponding day : %s",day_name(n));
    return 0;
}