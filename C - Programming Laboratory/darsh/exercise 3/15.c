#include<stdio.h>
#include<math.h>

int main(){
    int n,x;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of x : ");
    scanf("%d",&x);
    float sum=0;
    int fact=1;
    for(int i=1;i<=n;i++){
        sum+=(pow(x,(2*i)-1)/fact )*pow(-1,i+1);
        fact*= 2*i * (2*i + 1);
    }
    printf("%f",sum);
    return 0;
}