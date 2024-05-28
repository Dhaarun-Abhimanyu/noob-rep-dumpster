#include <stdio.h>
#include "./my_package.h"
int main(){
    int n;
    p("\nEnter number of rows and columns : \n");
    n = sint();
    int a[n][n],b[n][n],add[n][n],sub[n][n],mult[n][n];
    pi("\nEnter %d elements for matrix 1:\n",(n*n));
    si2array(a,n,n);
    pi("\nEnter %d elements for matrix 2:\n",(n*n));
    si2array(b,n,n);
    p("\nArray 1:\n");
    pi2rowarray(a,n,n);
    p("\nArray 2:\n");
    pi2rowarray(b,n,n);
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
    pi2rowarray(add,n,n);
    p("\nSubtraction:\n");
    pi2rowarray(sub,n,n);
    p("\nMultiplication:\n");
    pi2rowarray(mult,n,n);
    return 0;
}