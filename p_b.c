#include "main.h"
/**
 * print_binary - Prints an unsigned integer in binary.
 * @args: The variable argument list.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int printed_chars = 0;
printed_chars += print_binary_recursive(num);
return (printed_chars);
}
/**
 * print_binary_recursive - Recursively prints an unsigned integer in binary.
 * @num: The unsigned integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_binary_recursive(unsigned int num)
{
int printed_chars = 0;
if (num / 2 != 0)
printed_chars += print_binary_recursive(num / 2);
_putchar((num % 2) + '0');
printed_chars++;
return (printed_chars);
}
