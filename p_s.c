#include "main.h"
/**
 * print_S - Prints a string and handles non-printable characters.
 * @args: The variable argument list.
 *
 * Return: The number of characters printed.
 */
int print_S(va_list args)
{
char *str = va_arg(args, char *);
int printed_chars = 0;
if (str == NULL)
{
str = "(null)";
}
while (*str)
{
if (*str < 32 || *str >= 127)
{
_putchar('\\');
_putchar('x');
printed_chars += 2;
printed_chars += print_hex(*str);
}
else
{
_putchar(*str);
printed_chars++;
}
str++;
}
return (printed_chars);
}
/**
 * print_hex - Prints a character's ASCII code value in hexadecimal.
 * @c: The character to be printed.
 *
 * Return: The number of characters printed.
 */
int print_hex(char c)
{
int printed_chars = 0;
char hex_digits[] = "0123456789ABCDEF";
_putchar(hex_digits[c / 16]);
_putchar(hex_digits[c % 16]);
printed_chars += 2;
return (printed_chars);
}
