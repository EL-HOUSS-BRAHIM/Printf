#include "main.h"
#include <stdarg.h>
/**
 * print_plus - Handles the '+' flag for integers.
 * @args: The va_list containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int print_plus(va_list args)
{
int n = va_arg(args, int);
int printed_chars = 0;
if (n >= 0)
printed_chars += _putchar('+');
printed_chars += print_int_helper(n);
return (printed_chars);
}
/**
 * print_space - Handles the ' ' (space) flag for integers.
 * @args: The va_list containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int print_space(va_list args)
{
int n = va_arg(args, int);
int printed_chars = 0;
if (n >= 0)
printed_chars += _putchar(' ');
printed_chars += print_int_helper(n);
return (printed_chars);
}
/**
 * print_hash - Handles the '#' flag for octal and hexadecimal.
 * @args: The va_list containing the integer to print.
 * @format: The format specifier ('o' or 'x' or 'X').
 *
 * Return: The number of characters printed.
 */
int print_hash(va_list args, char format)
{
int printed_chars = 0;
if (format == 'o')
printed_chars += _putchar('0');
if (format == 'x' || format == 'X')
{
printed_chars += _putchar('0');
printed_chars += _putchar((format == 'X') ? 'X' : 'x');
}
printed_chars += print_int_helper(va_arg(args, unsigned int));
return (printed_chars);
}
