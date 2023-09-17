#include "main.h"
#include <limits.h>
#include <stdio.h>
int main(void)
{
int len;
int len2;
unsigned int ui;
void *addr;
char *str = "Hello, World!";
int n = 42;
int neg = -123;
int zero = 0;
len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
ui = (unsigned int)INT_MAX + 1024;
addr = (void *)0x7ffe637541f0;
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", str);
printf("String:[%s]\n", str);
_printf("Integer:[%d]\n", n);
printf("Integer:[%d]\n", n);
_printf("Negative:[%d]\n", neg);
printf("Negative:[%d]\n", neg);
_printf("Zero:[%d]\n", zero);
printf("Zero:[%d]\n", zero);
_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("Binary:[%b]\n", 98);
_printf("Address:[%p]\n", addr);
printf("Address:[%p]\n", addr);
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("Reverse:[%r]\n", "Hello, World!");
_printf("Rot13:[%R]\n", "Hello, World!");
return (0);
}
