#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int arr[MAX_SIZE];
int size;
int split1[MAX_SIZE], split2[MAX_SIZE];
int split1_size = 0, split2_size = 0;

// function declarations
void display(const int *array, int size);
void del(int *array, int *size, int item);
int search(const int *array, int size, int item);
void sort(int *array, int size, int reverse_sort);
void insert(int *array, int *size, int item, int pos);
void update(int *array, int pos, int item);
void exchange(int *array, int p1, int p2);
void merge(int *arr1, int size1, int *arr2, int size2, int *arr, int *size);
void split(const int *array, int size, int position, int *split1, int *split1_size, int *split2, int *split2_size);
void rotate(int *array, int size, int pos);

void display(const int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d,", array[i]);
    }
    printf("\n");
}

void del(int *array, int *size, int item) {
    int j = 0;
    for (int i = 0; i < *size; i++) {
        if (array[i] != item) {
            array[j] = array[i];
            j++;
        }
    }
    *size = j;
}

int search(const int *array, int size, int item) {
    for (int i = 0; i < size; i++) {
        if (array[i] == item) {
            return i;
        }
    }
    return -1;
}

void sort(int *array, int size, int reverse_sort) {
    int swap;

    // Bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (reverse_sort == 0) { // Ascending order
                if (array[j] > array[j + 1]) {
                    swap = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = swap;
                }
            } else { // Descending order
                if (array[j] < array[j + 1]) {
                    swap = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = swap;
                }
            }
        }
    }
    display(array, size);
}

void insert(int *array, int *size, int item, int pos) {
    if (*size < MAX_SIZE) {
        for (int i = *size; i > pos; i--) {
            array[i] = array[i - 1];
        }
        array[pos] = item;
        (*size)++;
    }
}

void update(int *array, int pos, int item) {
    if (pos >= 0 && pos < size) {
        array[pos] = item;
    }
}

void exchange(int *array, int p1, int p2) {
    if (p1 >= 0 && p1 < size && p2 >= 0 && p2 < size) {
        int temp = array[p1];
        array[p1] = array[p2];
        array[p2] = temp;
        display(array, size);
    }
}

void merge(int *arr1, int size1, int *arr2, int size2, int *arr, int *size) {
    if (size1 + size2 <= MAX_SIZE) {
        for (int i = 0; i < size1; i++) {
            arr[i] = arr1[i];
        }
        for (int i = 0; i < size2; i++) {
            arr[size1 + i] = arr2[i];
        }
        *size = size1 + size2;
    }
    display(arr, *size);
}

void split(const int *array, int size, int position, int *split1, int *split1_size, int *split2, int *split2_size) {
    *split1_size = position;
    *split2_size = size - position;
    for (int i = 0; i < position; i++) {
        split1[i] = array[i];
    }
    for (int i = 0; i < *split2_size; i++) {
        split2[i] = array[position + i];
    }
    printf("Array split 1: ");
    display(split1, *split1_size);
    printf("Array split 2: ");
    display(split2, *split2_size);
}

void rotate(int *array, int size, int pos) {
    if (pos >= 0 && pos < size) {
        for (int i = 0; i < pos; i++) {
            int temp = array[0];
            for (int j = 1; j < size; j++) {
                array[j - 1] = array[j];
            }
            array[size - 1] = temp;
        }
        display(array, size);
    }
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int get_valid_int() {
    int value;
    while (1) {
        if (scanf("%d", &value) == 1) {
            clear_input_buffer();
            return value;
        } else {
            clear_input_buffer();
            printf("Invalid input. Please enter an integer: ");
        }
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n\nENTER YOUR CHOICE: \n\n0.Initialize array\n1.Delete element\n2.Insert element\n3.Sort array\n4.Search array\n5.Update array\n6.Exchange elements\n7.Merge arrays\n8.Split array\n9.Rotate array\n10.Traverse array\n11.Display array\n12.Copy array\n13.Exit\n");
        printf("\nEnter your choice: ");
        choice = get_valid_int();
        int item, pos, splitPosition, destination[MAX_SIZE], reverse_sort;

        switch (choice) {
            case 0:
                printf("Enter size of array: ");
                scanf("%d", &size);
                printf("Enter elements of the array: ");
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                break;
            case 1:
                printf("\nEnter item to be deleted: ");
                scanf("%d", &item);
                del(arr, &size, item);
                printf("\nArray after deletion: ");
                display(arr, size);
                break;
            case 2:
                printf("\nEnter element and position to be inserted: ");
                scanf("%d,%d", &item, &pos);
                insert(arr, &size, item, pos);
                display(arr, size);
                break;
            case 3:
                printf("\nSort the array (0 for ascending, 1 for descending): ");
                scanf("%d", &reverse_sort);
                sort(arr, size, reverse_sort);
                break;
            case 4:
                printf("Enter element to be searched: ");
                scanf("%d", &item);
                pos = search(arr, size, item);
                if (pos != -1) {
                    printf("Element found at index %d\n", pos);
                } else {
                    printf("Element not found\n");
                }
                break;
            case 5:
                printf("Enter index to update: ");
                scanf("%d", &pos);
                printf("Enter new value: ");
                scanf("%d", &item);
                update(arr, pos, item);
                break;
            case 6:
                printf("Enter two index positions to exchange: ");
                scanf("%d %d", &item, &pos);
                exchange(arr, item, pos);
                break;
            case 7:
                if (split1_size == 0 && split2_size == 0) {
                    int size2;
                    printf("Enter size of second array: ");
                    scanf("%d", &size2);
                    int arr2[size2];
                    printf("Enter elements of second array: ");
                    for (int i = 0; i < size2; i++) {
                        scanf("%d", &arr2[i]);
                    }
                    merge(arr, size, arr2, size2, arr, &size);
                } else {
                    merge(split1, split1_size, split2, split2_size, arr, &size);
                }
                break;
            case 8:
                printf("Enter splitting position: ");
                scanf("%d", &splitPosition);
                split(arr, size, splitPosition, split1, &split1_size, split2, &split2_size);
                break;
            case 9:
                printf("Enter number of positions to rotate anti-clockwise: ");
                scanf("%d", &item);
                rotate(arr, size, item);
                break;
            case 10:
                printf("Traversing the array: ");
                display(arr, size);
                break;
            case 11:
                printf("Displaying the array: ");
                display(arr, size);
                break;
            case 12:
                // Copy the array
                for (int i = 0; i < size; i++) {
                    destination[i] = arr[i];
                }
                printf("Array copied to destination: ");
                display(destination, size);
                break;
            case 13:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

