#include "main.h"
#include <stdarg.h>
/**
 * print_width - Handles the width flag for formatting.
 * @args: The va_list containing the next argument.
 * @width: The width specifier.
 *
 * Return: The number of characters printed.
 */
int print_width(va_list args, int width)
{
int printed_chars = 0;
int len = 0;
int n;
char pad_char = ' ';
if (width < 0)
{
width = -width;
printed_chars += _putchar('-');
}
n = va_arg(args, int);
if (width > 0)
{
len = count_digits(n);
pad_char = '0';
while (len < width)
{
printed_chars += _putchar(pad_char);
len++;
}
}
printed_chars += print_int_helper(n);
return (printed_chars);
}
/**
 * print_precision - Handles the precision flag for formatting.
 * @args: The va_list containing the next argument.
 * @precision: The precision specifier.
 *
 * Return: The number of characters printed.
 */
int print_precision(va_list args, int precision)
{
int printed_chars = 0;
int n = va_arg(args, int);
if (precision >= 0)
{
printed_chars += print_int_helper(n);
}
return (printed_chars);
}
/**
 * count_digits - Counts the number of digits in an integer.
 * @n: The integer to count digits for.
 *
 * Return: The number of digits in the integer.
 */
int count_digits(int n)
{
int count = 0;
while (n != 0)
{
n /= 10;
count++;
}
return (count);
}
