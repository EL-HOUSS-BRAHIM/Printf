#include "main.h"
/**
 * print_pointer - Prints a pointer address in hexadecimal.
 * @args: The variable argument list.
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list args)
{
void *ptr = va_arg(args, void *);
int printed_chars = 0;
_putchar('0');
_putchar('x');
printed_chars += 2;
printed_chars += print_hex_address((unsigned long int)ptr);
return (printed_chars);
}
/**
 * print_hex_address - Prints an address in hexadecimal.
 * @address: The address to be printed.
 *
 * Return: The number of characters printed.
 */
int print_hex_address(unsigned long int address)
{
int printed_chars = 0;
char hex_digits[] = "0123456789abcdef";
if (address / 16 != 0)
printed_chars += print_hex_address(address / 16);
_putchar(hex_digits[address % 16]);
printed_chars++;
return (printed_chars);
}
