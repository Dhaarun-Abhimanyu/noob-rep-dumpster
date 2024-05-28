#include <stdio.h>
#include <math.h>
int bin_to_dec(int x){
    int sum=0,power=0;
    while(x!=0){
        if(x%10 == 1)
            sum+=pow(2,power);
        power++;
        x/=10;
    }
    return sum;
}
int bin_to_oct(int x){
    int octal[] = {0,1,10,11,100,101,110,111};
    int temp=1,sum=0;
    while(x!=0){
        int digit=0;
        for(int i=0;i<7;i++){
            if(octal[i] == x%1000){
                digit=i;
                break;
            }
        }
        sum += digit*temp;
        temp*=10;
        x/=1000;
    }
    return sum;
}
int dec_to_bin(int x){
    int arr[100],n=0,sum=0;
    while(x!=0){
        arr[n++] = x%2;
        x/=2;
    }
    for(int i=n-1;i>-1;i--){
        sum = sum*10 + arr[i];
    }
    return sum;
}
int oct_to_bin(int x){
    char octal[][3] = {"000","001","010","011","100","101","110","111"};
    char result[20][3];
    int n=0;
    while(x!=0){
        for(int i=0;i<3;i++)
            result[n][i] = octal[x%10][i];
        x/=10;
        n++;
    }
    int sum=0;
    for(int i=n-1;i>-1;i--){
        for(int j=0;j<3;j++){
            sum=(int)(result[i][j]) -48 + sum*10;
        }
    }
    return sum;
}
int main(){
    int bin,dec,oct;
    printf("\nEnter binary number : ");
    scanf("%d",&bin);
    printf("\nEnter decimal number : ");
    scanf("%d",&dec);
    printf("\nEnter octal number : ");
    scanf("%d",&oct);
    printf("\nBinary to Decimal %d : %d\nBinary to Octal %d : %d\nDecimal to binary %d : %d\nOctal to binary %d : %d",bin,bin_to_dec(bin),bin,bin_to_oct(bin),dec,dec_to_bin(dec),oct,oct_to_bin(oct));
    return 0;
}