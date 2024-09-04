#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ")
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // anti-clockwise rotation
    printf("Enter the number of anticlockwise rotations: ");
    scanf("%d",&num);
    for (int i=0;i<num;i++){
        int temp = arr[0];
        for (int j=1;j<n;j++){
            arr[j-1] = arr[j];
        }
        arr[n-1] = temp;
    }
    printf("Rotated array: ");
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    // insertion
    int ind,num;
    printf("Enter the number to insert and index: ");
    scanf("%d,%d",&num,&ind);
    for (int i=n-1;i>=ind;i--){
        arr[i+1] = arr[i];
    }
    arr[ind] = num;
    printf("Array after insertion: ");
    for (int i=0;i<n+1;i++){
        printf("%d,",arr[i]);
    }

    // deletion
    int ind1;
    printf("Enter the index to delete: ");
    scanf("%d",&ind1);

    for (int i=ind1;i<n;i++){
        arr[i] = arr[i+1];
    }
    n--;
    printf("Array after deletion: ");
    for (int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
}
