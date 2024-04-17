#include <stdio.h>
void display(int a[][],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int[] add(int a[][],int b[][],int row,int col){
    int ret[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            ret[i][j] = a[i][j] + b[i][j];
        }
    }
    return ret;
}
int[] sub(int a[][],int b[][],int row,int col){
    int ret[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            ret[i][j] = a[i][j] - b[i][j];
        }
    }
    return ret;
}
int main(){
    
    return 0;
}