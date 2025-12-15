#include <stdio.h>

int main() {
    int size, pos;
    scanf("%d", &size);
    int arr[20];

    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
       

    scanf("%d", &pos);

    for (int i = pos; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    size--;

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
        

    return 0;
}