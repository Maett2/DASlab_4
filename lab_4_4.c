#include <stdio.h>

int main() {
//get length of array ex: 5
    int user;
    int n;
    scanf("%d", &n);

//get integer from user and store it in array ex: 10 20 30 40 50
    int arr[n];
    for (int i = 0; i < n ; i++) {
        //get data from user
        scanf("%d",&user);
        arr[i] = user;
    }

// show data in array ex: 10 20 30 40 50
    printf("Array traversal: ");
    for (int i = 0; i < n ; i++) {
        printf("%d ",arr[i]);
        //show data     }
    }
    return 0;
    
}