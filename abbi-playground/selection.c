#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int n,i,key,j,k,min_idx,icounter=0,ccounter=0;
    printf("Enter number of values: ");
    scanf("%d",&n);
    int arr[n];
    for (k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }

    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++){
            icounter++;
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            swap(&arr[min_idx], &arr[i]);
        }
    }
    for (i=0;i<n;i++){
        printf("%d,",arr[i]);
    }

    printf("\nTotal number of iterations to sort: %d",icounter);
    printf("\nBest case: %d",n-1);
    printf("\nWorst case: %d",((n-1)*n)/2);
    printf("\nAverage case: %d",((n-1)*n)/2);
    return 0;
}
