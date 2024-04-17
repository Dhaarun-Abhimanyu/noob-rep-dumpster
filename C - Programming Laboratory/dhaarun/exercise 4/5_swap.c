#include <stdio.h>
void display(int a[],int size){
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
}
int main(){
    int size;
    printf("\nEnter the number of terms : ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter %d terms : ",size);
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("\nBefore swapping : ");
    display(arr,size);
    printf("\nAfter swapping all k and (k+1)th elements :\n");
    for(int i=0;i<size-1;i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    display(arr,size);
    return 0;
}