#include <stdio.h>
#include <stdlib.h>

int climbStairs(int n) {
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int first = 1;
    int second = 2;
    int curr = 0;

    for (int i = 3; i <= n; i++)
    {
        curr  = first + second;
        first = second;
        second = curr;
    }
    return curr;
}

int main (int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("One integer argument required!\n");
        return 0;
    }
    int num = atoi(argv[1]);
    printf("Number of steps: %d\n", climbStairs(num));
    return 1;
}