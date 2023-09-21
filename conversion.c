#include "main.h"
/**
 * convert_char - Converts a character and prints it.
 * @args: The argument list containing the character.
 * Return: The number of characters printed.
 */
int convert_char(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
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
return (count);
}
/**
 * convert_percent - Converts a percent character and prints it.
 * @args: The argument list (not used).
 * Return: The number of characters printed (always 1).
 */
int convert_percent(va_list args)
{
(void)args;
return (_putchar('%'));
}
/**
 * convert_integer - Converts an integer and prints it.
 * @args: The argument list containing the integer.
 * Return: The number of characters printed.
 */
int convert_integer(va_list args)
{
int n = va_arg(args, int);
return (print_number(n));
}
