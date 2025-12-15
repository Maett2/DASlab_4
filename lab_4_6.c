#include <stdio.h>

int main() {
    int size, pos, value,num;
    int arr[20];
    scanf("%d",&size);
   
    for(int i = 0; i < size; i++){
        scanf("%d",&num);
        arr[i] = num;
    }
// for loop get input from user
    

    scanf("%d", &pos); // get position to insert
    scanf("%d", &value); // get value to insert
    
    for(int i = size ; i >= pos - 1; i--){
        arr[i + 1] = arr[i];  
    }
    
    
    arr[pos] = value;
    size++;

    printf("Array after insertion: ");
    for(int i = 0 ; i < size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}