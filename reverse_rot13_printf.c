#include "main.h"
#include <stdarg.h>
/**
 * print_reverse - Reverses a string.
 * @args: The va_list containing the string to reverse.
 *
 * Return: The number of characters printed.
 */
int print_reverse(va_list args)
{
char *str = va_arg(args, char *);
int printed_chars = 0;
if (str)
{
int len = strlen(str);
int i;
for (i = len - 1; i >= 0; i--)
printed_chars += _putchar(str[i]);
}
return (printed_chars);
}
/**
 * print_rot13 - Applies ROT13 encoding to a string.
 * @args: The va_list containing the string to encode.
 *
 * Return: The number of characters printed.
 */
int print_rot13(va_list args)
{
char *str = va_arg(args, char *);
int printed_chars = 0;
if (str)
{
int i;
for (i = 0; str[i]; i++)
{
if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
{
char base = (str[i] >= 'a' && str[i] <= 'z') ? 'a' : 'A';
printed_chars += _putchar((str[i] - base + 13) % 26 + base);
}
else
printed_chars += _putchar(str[i]);
}
}
return (printed_chars);
}
