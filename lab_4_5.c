#include <stdio.h>

int main() {
    int size, value;
    scanf("%d",&size);
    int N;
    
    //get size from user
    
    int arr[10];

   
    for (int i = 0; i < size; i++){
     scanf("%d",&N);
        arr[i] = N;

    }

    scanf("%d", &value); // value to append

    arr[size] = value;
    size++;

    printf("Array after append: ");
    for (int i = 0;i < size;i++){
        printf("%d ",arr[i]);
        }


    return 0;
}