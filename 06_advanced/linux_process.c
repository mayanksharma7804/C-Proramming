#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

void get_process_info()
{
    struct dirent *entry;
    DIR *dp = opendir("/proc");

    if (dp == NULL)
    {
        perror("opendir");
        return;
    }

    while ((entry = readdir(dp)) != NULL)
    {
        if (entry->d_type == DT_DIR && atoi(entry->d_name) != 0)
        {
            // Read status file from /proc/[pid]/status
        }
    }
    closedir(dp);
}

int main()
{
    get_process_info();
    return 0;
}
