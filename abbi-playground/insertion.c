
#include <stdio.h>

int insertion()
{
    int n,i,key,j,k;
    printf("Enter number of values: ");
    scanf("%d",&n);
    int arr[n];
    for (k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for (i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
