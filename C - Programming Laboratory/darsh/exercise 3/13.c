#include<stdio.h>
int main(){
    int num;
    printf("Enter a number to check whether a number is krishnamoorthy number or not : ");
    scanf("%d",&num);
    int temp=num;
    int sum=0;
    while(temp!=0){
        int fact=1;
        int rem=temp%10;
        for(int i=1;i<=rem;i++){
            fact*=i;
        }
        sum+=fact;
        temp/=10;
    }
    if(sum==num){
        printf("%d is a krishnamoorthy number",num);
    }
    else{
        printf("%d is not a krishnamoorthy number",num);
    }
    return 0;
}