#include <stdio.h>
#include "my_package.h"
int main(){
    p("\nEnter the number of rows and columns :\n");
    int row = sint();
    int col = sint();
    int arr[row][col];
    pi("\nEnter %d elements :\n",(row*col));
    si2array(arr,row,col);
    p("\nRow wise array order:\n");
    pi2rowarray(arr,row,col);
    p("\nColumn wise array order:\n");
    pi2colarray(arr,row,col);
    
    return 0;
}