#include "main.h"

int main(void)
{
    int len;

    len = _printf("Hello, %s! %c is a %s number. %% is a special character.\n", "World", '3', "magic");
    _printf("Length: %d\n", len);

    len = _printf("Printing an integer: %d\n", 42);
    _printf("Length: %d\n", len);

    return (0);
}
