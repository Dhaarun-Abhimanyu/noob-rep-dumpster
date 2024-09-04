#include <stdio.h>

void main()
{
    int n,ind1,ind2;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the index to exchange: ");
    scanf("%d,%d",&ind1,&ind2);

    int temp = arr[ind1];
    arr[ind1] = arr[ind2];
    arr[ind2] = temp;

    for (int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
}
