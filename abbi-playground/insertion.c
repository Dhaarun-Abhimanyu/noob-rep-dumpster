#include <stdio.h>

int main()
{
    int n,i,key,j,k,icounter=0;
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
            icounter++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    for (i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    if (icounter == 0)
        icounter = n-1;

    printf("\nTotal number of iterations to sort: %d",icounter);
    printf("\nBest case: %d",n-1);
    printf("\nWorst case: %d",((n-1)*n)/2);
    printf("\nAverage case: %d",((n-1)*n)/2);
    return 0;
}
