#include <stdio.h>

void check(int arr[],int num, int n) {
    int flag = 0;
    for (int i=0;i<n;i++){
        if (arr[i] == num){
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Element not found");
    else
        printf("Element found");
}

int main() {
    int n,num;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        int temp;
        scanf("%d",&temp);
        arr[i] = temp;
    }
    printf("Enter the number to search: ");
    scanf("%d",&num);
    check(arr,num,n);
}

// Enter the number of elements in the array: 3
// 1
// 3
// 6
// Enter the number to search: 3
// Element found
