#include <stdio.h>
#include <limits.h>

int main(void)
{
    int a = INT_MAX;
    int b = 1;
    int result;

    if (__builtin_add_overflow(a, b, &result))
    {
        printf("Overflow occurred!\n");
    }
    else
    {
        printf("Result: %d\n", result);
    }

    return 0;
}