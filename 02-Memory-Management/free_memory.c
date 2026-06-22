#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));

    if(ptr == NULL) {
        return 1;
    }

    *ptr = 100;

    printf("Value = %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    printf("Memory released successfully.\n");

    return 0;
}