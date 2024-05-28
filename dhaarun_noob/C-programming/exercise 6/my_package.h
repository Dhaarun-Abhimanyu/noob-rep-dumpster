#include <stdio.h>
void p(char a[]){
    printf("%s",a);
}
void pi(char a[],int x){
    printf(("%s",a),x);
}
int psi(char a[]){
    printf("%s",a);
    int temp;
    scanf("%d",&temp);
    return temp;
}
int sint(){
    int temp;
    scanf("%d",&temp);
    return temp;
}
char schar(){
    char temp;
    scanf("%c",&temp);
    return temp;
}
float sfloat(){
    float temp;
    scanf("%f",&temp);
    return temp;
}
void sirray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i] = sint();
    }
}
void pirray(int a[],int n){
    for(int i=0;i<n;i++){
        pi("%d,",a[i]);
    }
}
void si2array(int a[][50],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            a[i][j] = sint();
        }
    }
}
void pi2rowarray(int row,int col,int a[row][col]){
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        p("\n");
    }
    
}
void pi2colarray(int row,int col,int a[][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[j][i]);
        }
        p("\n");
    }
}