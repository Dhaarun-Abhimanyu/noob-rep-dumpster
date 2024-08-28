

#include <stdio.h>

int selection()
{
    int n,i,key,j,k;
    printf("Enter number of values: ");
    scanf("%d",&n);
    int arr[n];
    for (k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }



    for (i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
