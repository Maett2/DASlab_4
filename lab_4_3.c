#include <stdio.h>

int main(void) {
    int arr[3] = {10, 11, 12};  // consecutive values expected
    int *p = arr;

    for (int i = 0; i < 3; i++) {
        printf("Element %d: value = %d, address = %p\n",
               i + 1, *(p + i), &arr[i]);
    }

    printf("Pointer p (arr) = %p\n", p);
    printf("p+1 = %p, p+2 = %p\n", (p + 1), (p + 2));
    return 0;
}