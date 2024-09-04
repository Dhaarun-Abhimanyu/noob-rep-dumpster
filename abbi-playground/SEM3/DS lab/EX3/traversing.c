#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Array: \n");
    for (int i=0;i<n;i++){
        printf("Traversed element at index %d and value is %d\n",i,arr[i]);
    }
}
