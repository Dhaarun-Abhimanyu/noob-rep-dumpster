#include <stdio.h>

int linear()
{
    int n,k,key,i;
    printf("Enter number of values: ");
    scanf("%d",&n);
    int arr[n];
    for (k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    printf("Enter the value to search: ");
    scanf("%d",&key);
    for (i=0;i,n;i++){
        if (arr[i] == key){
            printf("Element found at index %d",i);
            break;
        }
    }
    return 0;
}
