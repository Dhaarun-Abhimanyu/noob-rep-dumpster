#include <stdio.h>
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
        a[sa++]=b[i];
    }

    for(int i=0;i<sa-1;i++){
        for(int j=0;j<sa-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nMerged array : ");
    for (int i = 0; i < sa; i++)
        printf("%d,",a[i]);
    
    return 0;
}