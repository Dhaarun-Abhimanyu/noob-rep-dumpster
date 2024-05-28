#include <stdio.h>
int check(int num,int a[],int size){
    for(int i=0;i<size;i++){
        if(num==a[i])
        return 0;
    }
    return 1;
}
int main(){
    printf("Enter size of 2 arrays : ");
    int sa,sb;
    scanf("%d,%d",&sa,&sb);
    int a[sa],b[sb];
    printf("Enter elements of 1st array : ");
    for(int i=0;i<sa;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elements of 2nd array : ");
    int count=0;
    for(int i=0;i<sb;i++){
        scanf("%d",&b[i]);
        if(check(b[i],a,sa) == 1){
            a[sa++]=b[i];
        }
    }
    printf("\nMerged array : ");
    for (int i = 0; i < sa; i++)
        printf("%d,",a[i]);
    
    return 0;
}