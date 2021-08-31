#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[], char *envp[])
{
    int i = 0;

    printf("Command-line arguments:\n");
    for (i = 0; argv[i] != NULL; i++)
    {
        printf("\targv[%2d]: %s\n", i, argv[i]);

    }

    printf("Environment variables:\n");
    for (i = 0; envp[i] != NULL; i++)
    {
        printf("\tenvp[%2d]: %s\n", i, envp[i]);

    }

    exit(0);
    

}
