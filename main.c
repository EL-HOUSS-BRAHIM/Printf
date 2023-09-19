#include "main.h"
#include <stdio.h>

int main(void)
{
    int len;

    len = _printf("Hello, %s!\n", "world");
    printf("Length: %d\n", len);

    len = _printf("%c %s %%\n", 'A', "Custom printf");
    printf("Length: %d\n", len);

    return (0);
}
