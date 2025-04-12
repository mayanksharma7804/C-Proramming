#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
    char name[100];
    int age;
    float grade;
    struct Student *next;
} Student;

void add_student(Student **head, const char *name, int age, float grade)
{
    
}

void display_students(Student *head)
{
    
}

int main()
{
    Student *head = NULL;

    add_student(&head, "John Doe", 20, 85.5);
    display_students(head);

    return 0;
}
