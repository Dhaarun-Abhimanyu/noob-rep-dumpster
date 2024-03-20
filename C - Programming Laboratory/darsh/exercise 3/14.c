#include<stdio.h>
int main(){
    int n,temp;
    int num1,num2,num;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    if(n<2){
        printf("The number of data is not enough");
    }else if(n>2){
        printf("enter term 1 : ");
        scanf("%d",&num1);
        printf("Enter term 2 : ");
        scanf("%d",&num2);    
        if(num1<num2){
            temp=num1;
            num1=num2;
            num2=temp;
        }
        for(int i=2;i<n;i++){
            printf("Enter term %d : ",i+1);
            scanf("%d",&num);
            if(num>num1){
                num2=num1;
                num1=num;
            }else if(num2<num){
                num2=num;
            }else{
                continue;
            }
        }
    }
    printf("The second largest number : %d ",num2);
    return 0;
}