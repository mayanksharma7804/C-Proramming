#include <stdio.h>
#include <unistd.h>

typedef struct Block
{
    size_t size;
    struct Block *next;
} Block;

#define BLOCK_SIZE sizeof(Block)

static Block *freeList = NULL;

void *my_malloc(size_t size)
{
    Block *curr, *prev = NULL;
    size += BLOCK_SIZE;

    for (curr = freeList; curr != NULL; prev = curr, curr = curr->next)
    {
        if (curr->size >= size)
        {
            if (prev)
            {
                prev->next = curr->next;
            }
            else
            {
                freeList = curr->next;
            }
            return (void *)(curr + 1);
        }
    }

    curr = sbrk(size);
    curr->size = size;
    return (void *)(curr + 1);
}

void my_free(void *ptr)
{
    Block *block = (Block *)ptr - 1;
    block->next = freeList;
    freeList = block;
}

int main()
{
    int *arr = (int *)my_malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i * i;
        printf("%d ", arr[i]);
    }
    my_free(arr);
    return 0;
}
