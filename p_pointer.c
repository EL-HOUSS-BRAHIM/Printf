#include "main.h"
#include <stdarg.h>
#include <stddef.h>
int print_hex(unsigned long int n, int uppercase);
/**
 * print_pointer - Prints a pointer address in hexadecimal.
 * @args: The va_list containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list args)
{
unsigned long int address;
int printed_chars = 0;
address = (unsigned long int)va_arg(args, void *);
if (address == 0)
{
printed_chars += _putchar('(');
printed_chars += _putchar('n');
printed_chars += _putchar('i');
printed_chars += _putchar('l');
printed_chars += _putchar(')');
}
else
{
printed_chars += _putchar('0');
printed_chars += _putchar('x');
printed_chars += print_hex(address, 0);
}
return (printed_chars);
}
/**
 * print_hex - Prints a hexadecimal number recursively.
 * @n: The number to print in hexadecimal.
 * @uppercase: Flag to print in uppercase (1) or lowercase (0).
 *
 * Return: The number of characters printed.
 */
int print_hex(unsigned long int n, int uppercase)
{
char *hex_digits = (uppercase) ? "0123456789ABCDEF" : "0123456789abcdef";
int printed_chars = 0;
if (n / 16)
printed_chars += print_hex(n / 16, uppercase);
printed_chars += _putchar(hex_digits[n % 16]);
return (printed_chars);
}
