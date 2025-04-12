#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int key;
    int value;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct LRUCache
{
    int capacity;
    int size;
    Node *head, *tail;
    Node **hashmap;
} LRUCache;

LRUCache *createCache(int capacity)
{
    LRUCache *cache = (LRUCache *)malloc(sizeof(LRUCache));
    cache->capacity = capacity;
    cache->size = 0;
    cache->head = (Node *)malloc(sizeof(Node));
    cache->tail = (Node *)malloc(sizeof(Node));
    cache->head->next = cache->tail;
    cache->tail->prev = cache->head;
    cache->hashmap = (Node **)malloc(sizeof(Node *) * capacity);
    return cache;
}

// Add LRU cache functions like get, put, move to front, etc.

int main()
{
    LRUCache *cache = createCache(3);
    // Add put and get functions and test the cache
    return 0;
}
