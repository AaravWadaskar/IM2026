#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int mat[2][3] = {{10, 20, 30}, {40, 50, 60}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element [%d][%d] | Value: %d | RAM Address: %p\n", i, j, mat[i][j], &mat[i][j]);
        }
    }
}