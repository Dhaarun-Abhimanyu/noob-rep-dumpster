#include <stdio.h>

void main()
{
    int n,num,ind;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the index to delete: ");
    scanf("%d",&ind);

    for (int i=ind;i<n;i++){
        arr[i] = arr[i+1];
    }
    n--;

    for (int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
}
