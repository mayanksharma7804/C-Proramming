#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t size)
{
    return malloc(size);
}

void my_free(void *ptr)
{
    free(ptr);
}

int main()
{
    int *arr = (int *)my_malloc(10 * sizeof(int));
    my_free(arr);

    return 0;
}
