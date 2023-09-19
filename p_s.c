#include "main.h"
/**
 * print_string - Prints a string with special character escaping.
 * @args: The va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
char *str = va_arg(args, char *);
int printed_chars = 0;
if (!str)
str = "(null)";
while (*str)
{
if ((*str >= 0 && *str < 32) || *str >= 127)
{
printed_chars += _putchar('\\');
printed_chars += _putchar('x');
printed_chars += print_hex_helper((unsigned char)*str, 1);
}
else
{
printed_chars += _putchar(*str);
}
str++;
}
return (printed_chars);
}
