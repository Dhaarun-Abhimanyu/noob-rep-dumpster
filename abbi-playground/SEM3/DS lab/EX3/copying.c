#include <stdio.h>

void main()
{
    int n,ind1;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array 1: ");
    for (int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");

    int arr2[n];
    for (int i=0;i<n;i++){
        arr2[i] = arr[i];
    }
    printf("Copied array 2: ");
    for (int i=0;i<n;i++){
        printf("%d,",arr2[i]);
    }
}
