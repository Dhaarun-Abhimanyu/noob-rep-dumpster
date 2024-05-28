#include <stdio.h>
void print_array(int x[],int n){
    for(int i=0;i<n;i++)
        printf("%d",x[i]);
}
void binary(int x){
    int binary[50];
    int i=0;
    while(x != 0){
        binary[i++] = x%2;
        x/=2;
    }
    for(int j=0;j<i/2;j++){
        binary[]
    }
}
int main(){
    char choice;
    printf("\nEnter b(binary),o(octal),d(deciamal) : ");
    scanf("%c",&choice);
    switch(choice){
        case 'b':

    }
    return 0;
}