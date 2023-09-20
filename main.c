#include "main.h"
#include <stdio.h>

int main(void)
{
    int ret;
    char *str = "Hello, World!";

    ret = _printf("Task 0: %c\n", 'A');
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 0: %s\n", "Hello, World!");
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 1: %d\n", 12345);
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 2: %b\n", 98);
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 3: %u\n", 4294967295);
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 3: %o\n", 0755);
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 3: %x\n", 0x1a);
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 3: %X\n", 0x1a);
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 5: %S\n", "Best\nSchool");
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 6: %p\n", str);
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 7: %+d\n", 123);
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 8: %05d\n", 42);
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 9: %.5s\n", "Hello");
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 10: %0d\n", 123);
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 11: %-10s\n", "Left-aligned");
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 13: %r\n", "reverse");
    _printf("Returned: %d\n", ret);

    ret = _printf("Task 14: %R\n", "rotate me");
    _printf("Returned: %d\n", ret);

    return (0);
}
