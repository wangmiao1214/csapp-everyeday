#include <stdio.h>

fun(void);

int main()
{
    printf("%d\n", fun(2));
    getchar();
    
    return 0;
}

fun(void)
{
    return 1;
}
