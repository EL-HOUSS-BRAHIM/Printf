#include "main.h"
#include <stdio.h>

int main() {
int n;

printf("Testing _printf function:\n");
n = _printf("Hello, %s!\n", "world");
printf("Characters printed: %d\n", n);

// Testing various conversions
printf("\nTesting various conversions:\n");
n = _printf("Character: %c\n", 'A');
n += _printf("String: %s\n", "Test string");
n += _printf("Integer: %d\n", 12345);
n += _printf("Unsigned: %u\n", 12345);
n += _printf("Octal: %o\n", 0777);
n += _printf("Hexadecimal: %x\n", 0x1A3);
n += _printf("Uppercase Hexadecimal: %X\n", 0x1A3);
n += _printf("Binary: %b\n", 255);

// Testing custom conversions
printf("\nTesting custom conversions:\n");
n += _printf("Non-printable string: %S\n", "Hello\tWorld");
n += _printf("Pointer: %p\n", (void *)0x12345678);
n += _printf("Reversed string: %r\n", "Reverse");
n += _printf("ROT13 string: %R\n", "Hello, ROT13!");

printf("Characters printed in total: %d\n", n);

return 0;
}
