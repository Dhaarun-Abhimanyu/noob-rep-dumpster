#include <stdio.h>
#include "my_package.h"
void inp(int n,int a[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void disp(int n,int a[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        p("\n");
    }
}
void calc(int n,int a[][n],int b[][n]){
    int add[n][n],sub[n][n],mult[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            add[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
            mult[i][j] = 0;
            for(int k=0;k<n;k++){
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    p("\nAddition:\n");
    disp(n,add);
    p("\nSubtraction:\n");
    disp(n,sub);
    p("\nMultiplication:\n");
    disp(n,mult);
}
int main(){
    int n;
    p("\nEnter number of rows and columns : \n");
    n = sint();
    int a[n][n],b[n][n];
    pi("\nEnter %d elements for matrix 1:\n",(n*n));
    inp(n,a);
    pi("\nEnter %d elements for matrix 2:\n",(n*n));
    inp(n,b);
    p("\nArray 1:\n");
    disp(n,a);
    p("\nArray 2:\n");
    disp(n,b);
    calc(n,a,b);
    return 0;
}