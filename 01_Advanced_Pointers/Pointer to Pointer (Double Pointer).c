#include <stdio.h>

int main()
{
    int num = 100;

    int *ptr = &num;
    int **dptr = &ptr;

    printf("Value of num: %d\n", num);

    printf("\nUsing Pointer:\n");
    printf("*ptr = %d\n", *ptr);

    printf("\nUsing Double Pointer:\n");
    printf("**dptr = %d\n", **dptr);

    printf("\nAddresses:\n");
    printf("Address of num = %p\n", (void*)&num);
    printf("ptr stores = %p\n", (void*)ptr);
    printf("Address of ptr = %p\n", (void*)&ptr);
    printf("dptr stores = %p\n", (void*)dptr);

    return 0;
}