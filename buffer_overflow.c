#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    int canary = 100;
    char buffer[8];
    printf("--- STACK MEMORY LAYOUT ---\n");
    printf("Address of buffer: %p\n", (void*)&buffer);
    printf("Address of canary: %p\n\n", (void*)&canary);
    printf("Initial Canary Value: %d\n", canary);
    char *dang_input = "ABCDEFGHIJKL";
    printf("\nWriting 12 bytes into an 8-byte buffer...\n");
    strcpy(buffer, dang_input);
    printf("\n--- POST-OVERFLOW STATUS ---\n");
    printf("Buffer contains: %s\n", buffer);
    printf("Current Canary Value: %d\n", canary);

    return 1;
}