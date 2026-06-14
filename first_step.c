#include <stdio.h>

int main(void)
{
    int x = 42;
    printf("The value is: %i\n", x);
    printf("The physical RAM adress is: %p\n", (void*)&x);

    return 0;
}