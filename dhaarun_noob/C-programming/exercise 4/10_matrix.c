#include <stdio.h>
int n = 0;

void display(int a[n][n]){
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void input(int x[][n]){
    printf("\nEnter %d elements :\n",(n*n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        scanf("%d",&x[i][j]);
    }
}
int main(){
    printf("\nEnter number of rows/columns : ");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    int add[n][n],sub[n][n],mult[n][n];
    printf("\nMatrix 1 :");
    input(a);
    printf("\nMatrix 2");
    input(b);
    printf("\nMatrix 1 :");
    display(a);
    printf("\nMatrix 2");
    display(b);
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
    printf("\nAfter Addition :");
    display(add);
    printf("\nAfter Subtraction :");
    display(sub);
    printf("\nAfter Multiplication :");
    display(mult);
    return 0;
}