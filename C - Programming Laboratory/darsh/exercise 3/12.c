#include<stdio.h>
#include<string.h>
void bin(num){
    int arr[100];
    int i=0;
    while(num!=0){
        arr[i]=num%2;
        num/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    return ;
}
int main(){
    printf("Enter the system to which the given number should be converted :");
    printf("\nbinary(b),octal(o),hexadecimal(h) : ");
    char c;
    c=getchar();
    printf("Enter the decimal number :");
    int num;
    scanf("%d",&num);
    switch(c){
        case 'o':
        printf("\nThe octal number  : %o",num);
        break;
        case 'b':
        printf("\nThe binary number : ");
        bin(num);
        break;  
        case 'h':
        printf("\nThe hexadecimal number : %x",num);
        break;
        default:
        printf("\nInvalid input");
    }
    return 0;
}