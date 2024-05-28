#include <stdio.h>
#include "my_package.h"
int main(){
    int n;
    p("\nEnter number of terms : ");
    n = sint();
    int arr[n];
    printf("\nEnter %d elements:\n",n);
    sirray(arr,n);
    p("\nEnter the element to be searched : ");
    int target = sint();
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            printf("\nElement found at index %d!",i);
            return 0;
        }
    }
    p("\nElement not found :(");
    return 0;
}