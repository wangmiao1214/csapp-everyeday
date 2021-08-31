#include <stdio.h>
#include <sys/types.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

extern pid_t Fork(void);
extern void unix_error(char *msg);

//int main()
//{
//    /* 包装函数 */
//    /* 此时对于fork()函数的调用变为一行 */
//    pid_t pid;
//    pid =  Fork();

//    return 0;
    
//}

pid_t Fork(void)
{
    pid_t pid;
    if((pid = fork()) < 0)
    {
        unix_error("Fork error");
            
    }
    return pid;
}



void unix_error(char *msg)
{
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
    exit(0);

}
