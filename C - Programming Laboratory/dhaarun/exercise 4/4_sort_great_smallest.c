#include <stdio.h>
void input(int a[],int size){
    printf("\nEnter %d elements :\n",size);
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
}
void sort(int a[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nSorted Array :\n");
    for(int i=0;i<size;i++)
        printf("%d ,",a[i]);
}
int search(int a[],int size,int target){
    for(int i=0;i<size;i++){
        if(a[i] == target)
            return i;
    }
    return -1;
}
int main(){
    int size,target;
    printf("\nEnter the number of terms : ");
    scanf("%d",&size);
    int arr[size];
    input(arr,size);
    sort(arr,size);
    printf("\nLargest number : %d\nSmallesy number : %d",arr[0],arr[size-1]);
    printf("\nEnter an element to be searched : ");
    scanf("%d",&target);
    int check = search(arr,size,target);
    if(check>-1)
        printf("\nElement found at index %d",check);
    else
        printf("\nElement not found");
    return 0;
}