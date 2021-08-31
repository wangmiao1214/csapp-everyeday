#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

extern pid_t Fork();
extern void unix_error(char *msg);

int main()
{
    pid_t pid;
    int x = 1;
    
    pid = Fork();
    if (pid == 0)
    {
        printf("child : x=%d\n", ++x);
        exit(0);
    }
    printf("parent: x=%d\n", --x);
    exit(0);

}
