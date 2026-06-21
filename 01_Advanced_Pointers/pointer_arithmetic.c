#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr;

    printf("Array Traversal Using Pointers\n\n");

    for(int i = 0; i < 5; i++)
    {
        printf("Value = %d\tAddress = %p\n",
               *(ptr + i),
               (void*)(ptr + i));
    }

    printf("\nDemonstrating Pointer Arithmetic\n\n");

    printf("arr[0] = %d\n", arr[0]);
    printf("*(arr + 0) = %d\n\n", *(arr + 0));

    printf("arr[2] = %d\n", arr[2]);
    printf("*(arr + 2) = %d\n\n", *(arr + 2));

    printf("arr[4] = %d\n", arr[4]);
    printf("*(arr + 4) = %d\n", *(arr + 4));

    return 0;
}