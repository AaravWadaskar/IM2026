#include <stdio.h>
#include <stdlib.h>

int* bad_stack_pointer ()
{
    int stack_arr[] = {10, 20, 30, 40, 50};
    return stack_arr;
}

int* correct_heap_pointer ()
{
    int *heap_arr = malloc(5 * sizeof(int));
    if (heap_arr == NULL)
    {
        return NULL;
    }
    heap_arr[0] = 99;
    heap_arr[1] = 88;
    heap_arr[2] = 77;
    heap_arr[3] = 66;
    heap_arr[4] = 55;

    return heap_arr;
}

int main (void)
{
    printf("--- Test 1: Stack Allocation ---\n");
    int *bad_ptr = bad_stack_pointer();
    printf("Stack array index 0: %d\n\n", bad_ptr[0]); 

    printf("--- Test 2: Heap Allocation ---\n");
    int *good_ptr = correct_heap_pointer();
    if (good_ptr != NULL) {
        printf("Heap array index 0: %d\n", good_ptr[0]);
        printf("Heap array index 1: %d\n", good_ptr[1]);
        free(good_ptr); 
        printf("\nMemory freed successfully.\n");
    }
}

