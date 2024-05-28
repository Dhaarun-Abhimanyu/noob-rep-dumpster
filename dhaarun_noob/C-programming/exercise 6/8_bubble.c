#include <stdio.h>
#include "./my_package.h"
int main(){
    p("\nEnter number of terms : ");
    int n = sint();
    pi("\nEnter %d elements\n",n);
    int arr[n];
    sirray(arr,n);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    p("\nArray after bubble sort:\n");
    pirray(arr,n);
    return 0;
}