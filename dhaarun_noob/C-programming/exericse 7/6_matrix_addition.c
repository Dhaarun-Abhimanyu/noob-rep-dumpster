#include <stdio.h>
#include <stdlib.h>
int** mat_add(int** a,int** b,int row,int col){
    int **ret = (int**)malloc(row*sizeof(int*));
    for(int i=0;i<col;i++)
        ret[i] = (int*)malloc(col*sizeof(int));
    for(int i=0;i<col;i++){
        for(int j=0;j<col;j++)
            ret[i][j] = a[i][j] + b[i][j];
    }
    return ret;
}
void display(int** a,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void input(int row,int col,int **a){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    }
}
int main(){
    int m,n;
    printf("\nEnter number of rows and columns : ");
    scanf("%d,%d",&m,&n);
    int **a = (int**)malloc(m*sizeof(int*)),**b = (int**)malloc(m*sizeof(int*));
    for(int i=0;i<n;i++){
        a[i] = (int*)malloc(n*sizeof(int));
        b[i] = (int*)malloc(n*sizeof(int));
    }
    printf("\nEnter %d elements for Array 1:\n",m*n);
    input(m,n,a);
    printf("\nEnter %d elements for Array 2:\n",m*n);
    input(m,n,b);
    printf("\nArray 1:\n");
    display(a,m,n);
    printf("\nArray 2:\n");
    display(b,m,n);
    printf("\nAfter addition:\n");
    display(mat_add(a,b,m,n),m,n);
    return 0;
}