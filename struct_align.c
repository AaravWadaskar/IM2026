#include <stdio.h>
#include <stdlib.h>

struct BadLayout
{
    char a;
    int b;
    char c;
};

int main (void)
{
    printf("%zu\n", sizeof(struct BadLayout));
    return 1;
}