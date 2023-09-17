#include "main.h"
#include <unistd.h>
/**
 * _printf - Produces output according to a format.
 * @format: A character string containing zero or more directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
va_list args;
int printed_chars = 0;
va_start(args, format);
while (*format)
{
if (*format != '%')
{
_putchar(*format);
printed_chars++;
}
else
{
format++;
if (*format == '\0')
break;
printed_chars += process_format(format, args);
}
format++;
}
va_end(args);
return (printed_chars);
}
/**
 * process_format - Processes the format specifier and prints accordingly.
 * @format: A pointer to the format specifier.
 * @args: The variable argument list.
 *
 * Return: The number of characters printed.
 */
int process_format(const char *format, va_list args)
{
int printed_chars = 0;
switch (*format)
{
case 'c':
printed_chars += print_char(args, format);
break;
case 's':
printed_chars += print_string(args, format);
break;
case '%':
_putchar('%');
printed_chars++;
break;
default:
_putchar('%');
printed_chars++;
_putchar(*format);
printed_chars++;
break;
}
return (printed_chars);
}
/**
 * print_char - Prints a character.
 * @args: The variable argument list.
 * @format: The format specifier (unused in this implementation).
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args, const char *format)
{
(void)format;
char c;
c = va_arg(args, int);
_putchar(c);
return (1);
}
/**
 * print_string - Prints a string.
 * @args: The variable argument list.
 * @format: The format specifier (unused in this implementation).
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args, const char *format)
{
(void)format;
char *str;
str = va_arg(args, char *);
int printed_chars = 0;
if (str == NULL)
str = "(null)";
while (*str)
{
_putchar(*str);
str++;
printed_chars++;
}
return (printed_chars);
}
