#include<stdio.h>
int main(){
    int min;
    printf("Input minutes : ");
    scanf("%d",&min);
    printf("%d hrs %d mins",min/60,min%60);
    return 0;
}