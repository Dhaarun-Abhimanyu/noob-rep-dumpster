#include <stdio.h>
int main(){
    int row,col;
    printf("\nEnter no. of rows and columns : ");
    scanf("%d,%d",&row,&col);
    int a[row][col+1];
    printf("\nEnter %d elements : ",(row * col));
    for(int i=0;i<row;i++){
        int index = 0;
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]<a[i][index])
                index = j;
        }

        
        a[i][col] = index;
    }
    int sadsize = 0;
    int saddle[sadsize];
    for(int i=0;i<row;i++){
        int index = a[i][col];
        printf("\nCheck : %d",index);
        int flag = 0;
        for(int j=0;j<row;j++){
            if(a[i][index] < a[j][index]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            saddle[sadsize++] = a[i][index];
        }
    }
    printf("\nSaddle points : ");
    for(int i=0;i<sadsize;i++)
        printf("%d,",saddle[i]);
    return 0;
}
/*
1 2 3 0
4 5 6 0
7 8 9 0

*/