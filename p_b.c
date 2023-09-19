#include "main.h"
#include <stdarg.h>
/**
 * print_binary - Prints an unsigned integer in binary format.
 * @args: The va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int printed_chars = 0;
printed_chars += print_binary_helper(num);
return (printed_chars);
}
/**
 * print_binary_helper - Helper function for printing binary recursively.
 * @num: The unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_binary_helper(unsigned int num)
{
int printed_chars = 0;
if (num / 2)
printed_chars += print_binary_helper(num / 2);
printed_chars += _putchar((num % 2) + '0');
return (printed_chars);
}
