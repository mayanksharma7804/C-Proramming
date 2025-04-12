#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_TASK_LENGTH 100

typedef struct
{
    char task[MAX_TASK_LENGTH];
} ToDo;

void add_task(ToDo *list, int *size, const char *task)
{
}

void display_tasks(ToDo *list, int size)
{
}

int main()
{
    ToDo list[MAX_TASKS];
    int size = 0;
    char task[MAX_TASK_LENGTH];

    printf("Enter task to add: ");
    fgets(task, sizeof(task), stdin);

    add_task(list, &size, task);
    display_tasks(list, size);

    return 0;
}
