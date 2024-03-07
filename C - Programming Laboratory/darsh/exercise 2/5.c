#include<stdio.h>
int main(){
    int hr,min;
    printf("Input hrs :");
    scanf("%d",&hr);
    printf("Input minutes : ");
    scanf("%d",&min);
    printf("Total: %d",hr*60 + min);
    return 0;
}