#include <stdio.h>

void sum(int row, int col,  int arr[row][col]) {
    // Sum of rows
    for (int i = 0; i < row; i++) {
        int s = 0;
        for (int j = 0; j < col; j++) {
            s += arr[i][j];
        }
        printf("Sum of row%d:%d\n", i,s); 
    }
    for (int j = 0; j < col; j++) {
        int s = 0;
        for (int i = 0; i < row; i++) {
            s += arr[i][j];
        }
        printf("\nSum of column%d:%d ", j,s); 
    }
}

void main() {
    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d,%d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int temp;
            printf("Enter the (%d,%d) element: ", i, j);
            scanf("%d", &temp);
            arr[i][j] = temp;
        }
    }
    sum(row, col, arr);
}

// Enter the number of rows and columns: 3,3
// Enter the (0,0) element: 1
// Enter the (0,1) element: 2
// Enter the (0,2) element: 3
// Enter the (1,0) element: 1
// Enter the (1,1) element: 2
// Enter the (1,2) element: 2
// Enter the (2,0) element: 1
// Enter the (2,1) element: 3
// Enter the (2,2) element: 2
// Sum of row0:6
// Sum of row1:5
// Sum of row2:6

// Sum of column0:3 
// Sum of column1:7 
// Sum of column2:7 
