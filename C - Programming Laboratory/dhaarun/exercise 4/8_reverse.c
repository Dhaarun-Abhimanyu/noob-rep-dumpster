#include <stdio.h>
int main(){
    int size;
    printf("\nEnter number of terms : ");
    scanf("%d",&size);
    int a[size];
    printf("\nEnter %d elements : ",size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
        if(i>=size/2){
            int temp = a[i];
            a[i] = a[size-i-1];
            a[size-i-1] = temp;
        }
    }
        printf("\nReverse Array :\n");
        for(int i=0;i<size;i++)
            printf("%d,",a[i]);
    

    return 0;
}