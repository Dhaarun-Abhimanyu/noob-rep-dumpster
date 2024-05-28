#include <stdio.h>
int calc(int m,int n){
    int arr[m][n+1];
    int col[n];
    for(int i=0;i<n;i++)
        col[i] = 0;
    printf("\nEnter %d numbers :\n",m*n);
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
            col[j]+=arr[i][j];
        }
        arr[i][n]=sum;
    }
    printf("\nSum of each column and row :\n");
    for(int i=0;i<=m;i++){
        for(int j=0;j<n;j++){
            if(i==m)
                printf("||\t");
            else
                printf("%d\t",arr[i][j]);
        }
        if(i!=m)
            printf("= %d",arr[i][n]);
        printf("\n");
    }
    for(int i=0;i<n;i++)
        printf("%d\t",col[i]);
}
int main(){
    int m,n;
    printf("\nEnter number of rows and columns separated by commas : ");
    scanf("%d,%d",&m,&n);
    calc(m,n);
    return 0;
}