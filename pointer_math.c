#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int numbers[] = {100, 200, 300, 400};
    int *ptr = numbers;

    for (int i = 0; i < 4; i++)
    {
        printf("Value: %d\n", *(ptr + i));
        printf("Address: %p\n", (ptr + i));
        printf("\n");
    }
}