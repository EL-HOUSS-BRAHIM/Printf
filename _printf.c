#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - Produces output according to a format.
 * @format: A string containing zero or more directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
va_list args;
char buffer[BUFFER_SIZE];
int printed_chars = 0;
int index = 0;
int i = 0;
va_start(args, format);
while (format && format[i])
{
if (index == BUFFER_SIZE - 1)
{
printed_chars += p_buffer(buffer, index);
index = 0;
}
if (format[i] != '%')
{
buffer[index] = format[i];
index++;
}
else
{
i++;
if (!format[i])
return (-1);
if (format[i] == 'c')
buffer[index] = va_arg(args, int);
else if (format[i] == 's')
printed_chars += print_str(args);
else if (format[i] == '%')
buffer[index] = '%';
else if (format[i] == 'd' || format[i] == 'i')
printed_chars += print_int(args);
else
{
buffer[index] = '%';
index++;
buffer[index] = format[i];
}
index++;
}
i++;
}
printed_chars += p_buffer(buffer, index);
va_end(args);
return (printed_chars);
}
/**
 * print_char - Prints a character.
 * @args: The va_list containing the character to print.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
}
/**
 * print_int - Prints an integer.
 * @args: The va_list containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int print_int(va_list args)
{
int n = va_arg(args, int);
int printed_chars = 0;
if (n < 0)
{
printed_chars += _putchar('-');
n = -n;
}
if (n / 10)
printed_chars += print_int_helper(n / 10);
printed_chars += _putchar((n % 10) + '0');
return (printed_chars);
}
/**
 * print_int_helper - Helper function for printing integers recursively.
 * @n: The integer to print.
 *
 * Return: The number of characters printed.
 */
int print_int_helper(int n)
{
int printed_chars = 0;
if (n / 10)
printed_chars += print_int_helper(n / 10);
printed_chars += _putchar((n % 10) + '0');
return (printed_chars);
}
