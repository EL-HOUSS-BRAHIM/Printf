#include "main.h"
/**
 * print_unsigned - Prints an unsigned integer.
 * @args: The variable argument list.
 * @base: The base for printing (e.g., 10 for decimal, 16 for hexadecimal).
 * @uppercase: 1 to print uppercase letters in hexadecimal, 0 for lowercase.
 *
 * Return: The number of characters printed.
 */
int print_unsigned(va_list args, int base, int uppercase)
{
unsigned int num = va_arg(args, unsigned int);
int printed_chars = 0;
printed_chars += print_unsigned_recursive(num, base, uppercase);
return (printed_chars);
}
/**
 * print_unsigned_recursive - Recursively prints an unsigned integer.
 * @num: The unsigned integer to be printed.
 * @base: The base for printing (e.g., 10 for decimal, 16 for hexadecimal).
 * @uppercase: 1 to print uppercase letters in hexadecimal, 0 for lowercase.
 *
 * Return: The number of characters printed.
 */
int print_unsigned_recursive(unsigned int num, int base, int uppercase)
{
int printed_chars = 0;
char hex_digits_lower[] = "0123456789abcdef";
char hex_digits_upper[] = "0123456789ABCDEF";
if (num / base != 0)
printed_chars += print_unsigned_recursive(num / base, base, uppercase);
if (uppercase)
_putchar(hex_digits_upper[num % base]);
else
_putchar(hex_digits_lower[num % base]);
printed_chars++;
return (printed_chars);
}
/**
 * print_u - Prints an unsigned integer in decimal.
 * @args: The variable argument list.
 *
 * Return: The number of characters printed.
 */
int print_u(va_list args)
{
return (print_unsigned(args, 10, 0));
}
/**
 * print_o - Prints an unsigned integer in octal.
 * @args: The variable argument list.
 *
 * Return: The number of characters printed.
 */
int print_o(va_list args)
{
return (print_unsigned(args, 8, 0));
}
/**
 * print_x - Prints an unsigned integer in lowercase hexadecimal.
 * @args: The variable argument list.
 *
 * Return: The number of characters printed.
 */
int print_x(va_list args)
{
return (print_unsigned(args, 16, 0));
}
/**
 * print_X - Prints an unsigned integer in uppercase hexadecimal.
 * @args: The variable argument list.
 *
 * Return: The number of characters printed.
 */
int print_X(va_list args)
{
return (print_unsigned(args, 16, 1));
}
