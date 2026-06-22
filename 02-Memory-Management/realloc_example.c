#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 3;

    arr = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    n = 5;

    arr = (int *)realloc(arr, n * sizeof(int));

    for(int i = 3; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Updated Array:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}