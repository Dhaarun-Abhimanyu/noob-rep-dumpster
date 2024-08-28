#include <stdio.h>

int bubble()
{
    int n,k,i,j;
    printf("Enter number of values: ");
    scanf("%d",&n);
    int arr[n];
    for (k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
