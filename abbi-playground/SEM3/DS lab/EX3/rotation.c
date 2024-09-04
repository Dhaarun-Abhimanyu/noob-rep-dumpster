#include <stdio.h>

void main()
{
    int n,num;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of anticlockwise rotations: ");
    scanf("%d",&num);
    for (int i=0;i<num;i++){
        int temp = arr[0];
        for (int j=1;j<n;j++){
            arr[j-1] = arr[j];
        }
        arr[n-1] = temp;
    }

    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
