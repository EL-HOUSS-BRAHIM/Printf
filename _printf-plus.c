#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * print_str - Prints a string.
 * @args: The va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int print_str(va_list args)
{
char *str = va_arg(args, char *);
int printed_chars = 0;
if (!str)
str = "(null)";
while (*str)
{
printed_chars += _putchar(*str);
str++;
}
return (printed_chars);
}
/**
 * print_percent - Prints a percent character.
 *
 * Return: The number of characters printed (always 1).
 */
int print_percent(void)
{
return (_putchar('%'));
}
