#include <stdio.h>

int main() {
    int x = 10;
    //pointer
    int *ptr = &x;

    // pointer point to x

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", &*ptr);
    printf("%d\n", *ptr);

    return 0;
}