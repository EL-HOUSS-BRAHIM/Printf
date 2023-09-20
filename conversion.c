#include "main.h"
/**
 * convert_char - Converts a character and prints it.
 * @args: The argument list containing the character.
 * Return: The number of characters printed.
 */
int convert_char(va_list args)
{
char c = va_arg(args, int);
return _putchar(c);
}
/**
 * convert_string - Converts a string and prints it.
 * @args: The argument list containing the string.
 * Return: The number of characters printed.
 */
int convert_string(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
for (; *str; str++)
{
count += _putchar(*str);
}
return count;
}
/**
 * convert_percent - Converts a percent character and prints it.
 * @args: The argument list (not used).
 * Return: The number of characters printed (always 1).
 */
int convert_percent(va_list args)
{
(void)args;
return _putchar('%');
}
/**
 * convert_integer - Converts an integer and prints it.
 * @args: The argument list containing the integer.
 * Return: The number of characters printed.
 */
int convert_integer(va_list args)
{
int n = va_arg(args, int);
return print_number(n);
}
/**
 * convert_unsigned - Converts an unsigned integer and prints it.
 * @args: The argument list containing the unsigned integer.
 * Return: The number of characters printed.
 */
int convert_unsigned(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return print_unsigned(n);
}
/**
 * convert_octal - Converts an unsigned integer to octal and prints it.
 * @args: The argument list containing the unsigned integer.
 * Return: The number of characters printed.
 */
int convert_octal(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return print_octal(n);
}
/**
 * convert_hex - Converts an unsigned integer to hexadecimal and prints it.
 * @args: The argument list containing the unsigned integer.
 * Return: The number of characters printed.
 */
int convert_hex(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return print_hex(n, 0); /* Use lowercase for hex */
}
/**
 * convert_hex_upper - Converts an unsigned integer to uppercase hexadecimal and prints it.
 * @args: The argument list containing the unsigned integer.
 * Return: The number of characters printed.
 */
int convert_hex_upper(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return print_hex(n, 1); /* Use uppercase for hex */
}
