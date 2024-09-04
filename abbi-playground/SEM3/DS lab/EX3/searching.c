
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
    printf("Enter the element to search: ");
    scanf("%d",&num);

    for (int i=0;i<n;i++){
        if (arr[i] == num){
            printf("Element found at index %d",i);
            break;
        }
    }
}
