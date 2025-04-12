#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_LINE 1024

int main()
{
    char line[MAX_LINE];
    char *args[64];

    while (1)
    {
        printf("my_shell> ");
        fgets(line, MAX_LINE, stdin);
        line[strcspn(line, "\n")] = 0;

        if (strcmp(line, "exit") == 0)
            break;

        char *token = strtok(line, " ");
        int i = 0;
        while (token != NULL)
        {
            args[i++] = token;
            token = strtok(NULL, " ");
        }
        args[i] = NULL;

        pid_t pid = fork();
        if (pid == 0)
        {
            execvp(args[0], args);
            perror("execvp failed");
            exit(1);
        }
        else
        {
            wait(NULL);
        }
    }
    return 0;
}
