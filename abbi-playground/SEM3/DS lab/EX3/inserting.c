#include <stdio.h>

void main()
{
    int n,num,ind;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n+1];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to insert and index: ");
    scanf("%d %d",&num,&ind);

    for (int i=n-1;i>=ind;i--){
        arr[i+1] = arr[i];
    }
    arr[ind] = num;

    for (int i=0;i<n+1;i++){
        printf("%d,",arr[i]);
    }
}
