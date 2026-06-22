#include <stdio.h>

void greet() {
    printf("Hello from function pointer!\n");
}

int main() {
    void (*funcPtr)() = greet;

    funcPtr();

    return 0;
}