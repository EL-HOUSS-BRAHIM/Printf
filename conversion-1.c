#include "main.h"
/**
 * convert_unsigned - Converts an unsigned integer and prints it.
 * @args: The argument list containing the unsigned integer.
 * Return: The number of characters printed.
 */
int convert_unsigned(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (print_unsigned(n));
}
/**
 * convert_octal - Converts an unsigned integer to octal and prints it.
 * @args: The argument list containing the unsigned integer.
 * Return: The number of characters printed.
 */
int convert_octal(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (print_octal(n));
}
/**
 * convert_hex - Converts an unsigned integer to hexadecimal and prints it.
 * @args: The argument list containing the unsigned integer.
 * Return: The number of characters printed.
 */
int convert_hex(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (print_hex(n, 0));
}
/**
 * convert_hex_upper - Converts an unsigned integer.
 * @args: The argument list containing the unsigned integer.
 * Return: The number of characters printed.
 */
int convert_hex_upper(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (print_hex(n, 1));
}
