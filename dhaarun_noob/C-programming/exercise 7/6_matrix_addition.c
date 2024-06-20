#include <stdio.h>
#include <stdlib.h>
int** mat_add(int** a,int** b,int row,int col){
    int **ret = (int**)malloc(row*sizeof(int*));
    for(int i=0;i<row;i++){
        ret[i] = (int*)malloc(col*sizeof(int));
        for(int j=0;j<col;j++)
            ret[i][j] = a[i][j] + b[i][j];
    }
    return ret;
}
void display(int** a,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
            printf("%d ",a[i][j]);
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
    for(int i=0;i<m;i++){
        a[i] = (int*)malloc(n*sizeof(int));
        b[i] = (int*)malloc(n*sizeof(int));
    }
    int ***in = (int***)malloc(2*sizeof(int**));
    in[0] = (int**)malloc(m*sizeof(int*));
    in[0] = a;
    in[1] = (int**)malloc(m*sizeof(int*));
    in[1] = b;
    for(int i=0;i<2;i++){
        printf("\nEnter %d elements Array %d",m*n,i+1);
        input(m,n,*(in+i));
    }
    printf("\nArray 1:\n");
    display(a,m,n);
    printf("\nArray 2:\n");
    display(b,m,n);
    printf("\nAfter addition:\n");
    display(mat_add(a,b,m,n),m,n);
    return 0;
}