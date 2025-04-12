#include <stdio.h>
#include <ctype.h>

void tokenizer(const char *source)
{
    for (int i = 0; source[i] != '\0'; i++)
    {
        if (isdigit(source[i]))
        {
            printf("Digit: %c\n", source[i]);
        }
        else if (isalpha(source[i]))
        {
            printf("Alpha: %c\n", source[i]);
        }
    }
}

int main()
{
    char source[] = "int x = 10;";
    tokenizer(source);
    return 0;
}
