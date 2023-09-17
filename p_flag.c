#include "main.h"
/**
 * print_flag_plus - Handles the '+' flag character for integers.
 * @args: The variable argument list.
 * @n: The integer to be printed.
 * @printed_chars: A pointer to the total number of characters printed.
 *
 * Return: The number of characters printed.
 */
int print_flag_plus(va_list args, int n, int *printed_chars)
{
if (n >= 0)
{
_putchar('+');
(*printed_chars)++;
}
return (print_int(args, 0));
}
/**
 * print_flag_space - Handles the ' ' flag character for integers.
 * @args: The variable argument list.
 * @n: The integer to be printed.
 * @printed_chars: A pointer to the total number of characters printed.
 *
 * Return: The number of characters printed.
 */
int print_flag_space(va_list args, int n, int *printed_chars)
{
if (n >= 0)
{
_putchar(' ');
(*printed_chars)++;
}
return (print_int(args, 0));
}
/**
 * print_flag_hash - Handles the '#' flag character for integers.
 * @args: The variable argument list.
 * @n: The integer to be printed.
 * @printed_chars: A pointer to the total number of characters printed.
 *
 * Return: The number of characters printed.
 */
int print_flag_hash(va_list args, int n, int *printed_chars)
{
if (n != 0)
{
_putchar('0');
(*printed_chars)++;
}
return (print_int(args, 0));
}
