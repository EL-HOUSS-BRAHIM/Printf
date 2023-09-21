#include "main.h"
/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * print_number - Prints an integer to stdout.
 * @n: The integer to print.
 * Return: The number of characters printed.
 */
int print_number(int n)
{
int count = 0;
int sign = 1;
if (n < 0)
{
_putchar('-');
sign = -1;
count++;
}
if (n / 10)
{
count += print_number((n / 10) * sign);
}

_putchar((n % 10) * sign + '0');
count++;

return (count);
}
/**
 * print_unsigned - Prints an unsigned integer to stdout.
 * @n: The unsigned integer to print.
 * Return: The number of characters printed.
 */
int print_unsigned(unsigned int n)
{
int count = 0;
if (n / 10)
{
count += print_unsigned(n / 10);
}
_putchar((n % 10) + '0');
count++;
return (count);
}
/**
 * print_octal - Prints an unsigned integer in octal format to stdout.
 * @n: The unsigned integer to print.
 * Return: The number of characters printed.
 */
int print_octal(unsigned int n)
{
int count = 0;
if (n / 8)
{
count += print_octal(n / 8);
}

_putchar((n % 8) + '0');
count++;

return (count);
}
