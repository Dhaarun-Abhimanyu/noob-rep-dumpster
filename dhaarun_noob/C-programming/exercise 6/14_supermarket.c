#include <stdio.h>
int product(int x){
    int p=1;
    while(x!=0){
        p*=x%10;
        x/=10;
    }
    return p;
}
int main(){
    int N;
    printf("\nEnter product value N : ");
    scanf("%d",&N);
    printf("\nN = %d\nPrice = $%d",N,product(N));
    return 0;
}