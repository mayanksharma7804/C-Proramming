#include <stdio.h>
#include <stdlib.h>

typedef struct Record
{
    int id;
    char name[50];
    float salary;
} Record;

void add_record(FILE *file)
{
}

void display_records(FILE *file)
{
}

int main()
{
    FILE *file = fopen("records.db", "rb+");
    if (!file)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    // Call functions like add_record(), display_records(), etc.
    fclose(file);
    return 0;
}
