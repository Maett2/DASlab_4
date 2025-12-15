#include <stdio.h>

void display(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
}

void insert(int arr[], int *size, int pos, int value) {
    //for loop of insertion
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    (*size)++;
}

void update(int arr[], int pos, int value) {
    //update data
    arr[pos] = value;
}

void delete(int arr[], int *size, int pos) {
    //for loop for delete
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int arr[10];
    int size = 0;

    int choice, pos, value;

    while (1) {
        printf("Menu:\n");
        printf("1. Display all elements in the array\n");
        printf("2. Insert element into the array\n");
        printf("3. Update element in the array\n");
        printf("4. Delete element from the array\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            display(arr, size);
            break;

        case 2:
            if (size >= 10) {
                printf("Array is full.\n");
                break;
            }
            printf("Enter position: ");
            scanf("%d", &pos);
            printf("Enter value: ");
            scanf("%d", &value);

            insert(arr, &size, pos, value);
            break;

        case 3:
            if (size == 0) {
                printf("Array is empty.\n");
                break;
            }
            printf("Enter position: ");
            scanf("%d", &pos);
            printf("Enter new value: ");
            scanf("%d", &value);

            update(arr, pos, value);

            break;

        case 4:
            if (size == 0) {
                printf("Array is empty.\n");
                break;
            }
            printf("Enter position: ");
            scanf("%d", &pos);


            delete(arr, &size, pos);
            break;

        case 0:
            printf("Exiting program.\n");
            return 0;

        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}