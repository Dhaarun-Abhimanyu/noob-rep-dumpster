#include <stdio.h>

void main()
{
    int n1,n2;
    printf("Enter the size of the first array: ");
    scanf("%d",&n1);
    int arr1[n1];
    for (int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    for (int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }

    int arr3[n1+n2];
    for (int i=0;i<n1;i++){
        arr3[i] = arr1[i];
    }
    for (int i=0;i<n2;i++){
        arr3[n1+i] = arr2[i];
    }


    for (int i=0;i<n1+n2;i++){
        printf("%d,",arr3[i]);
    }
}
