#include <stdio.h>
#include "my_package.h"
int main(){
    p("\nEnter number of rows and columns : ");
    int n = sint();
    pi("\nEnter %d elements :\n",n*n);
    int arr[n][n];
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = sint();
            if(i == j)
                sum += arr[i][j];
        }
    }
    p("\nThe matrix:\n");
    pi2rowarray(n,n,arr);
    pi("\nSum of diagonal elements : %d",sum);
    return 0;
}