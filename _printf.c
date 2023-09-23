#include "main.h"
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formatted string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
int printed_characters;
my_converter_t f_list[] = {
{"c", print_char},
{"s", print_str},
{"%", print_percent},
{"d", print_int},
{"i", print_int},
{"b", print_binary},
{"r", print_reversed},
{"R", print_rot13},
{"u", print_unsigned},
{"o", print_octal},
{"x", print_hex_lower},
{"X", print_hex_upper},
{"S", print_custom_str},
{"p", print_pointer},
{"0", print_zero},
{"-", print_mines},
{"+", print_plus},
{" ", print_space},
{"#", print_hash},
{"l", print_long},
{"h", print_short},
{NULL, NULL}
};
va_list arg_list;
if (format == NULL)
return (-1);
va_start(arg_list, format);
printed_characters = my_par(format, f_list, arg_list);
va_end(arg_list);
return (printed_characters);
}
/**
 * print_long - Handles the 'l' length modifier for integers
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_long(va_list args)
{
long int num = va_arg(args, long int);
char buffer[32];
int len;
_itoa((int)num, buffer, 10);
len = _strlen(buffer);
return (write(1, buffer, len));
}
/**
 * print_short - Handles the 'h' length modifier for integers
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_short(va_list args)
{
short int num = (short int)va_arg(args, int);
char buffer[32];
int len;
sprintf(buffer, "%d", (int)num);
len = _strlen(buffer);
return (write(1, buffer, len));
}
/**
 * _itoa - Converts an integer to a string
 * @n: The integer to convert
 * @buffer: The buffer to store the result
 * @base: The base for conversion (e.g., 10 for decimal)
 *
 * Return: A pointer to the result string
 */
char *_itoa(int n, char *buffer, int base)
{
int i = 0;
int is_negative = 0;
if (n == 0)
{
buffer[i++] = '0';
buffer[i] = '\0';
return (buffer);
}
if (n < 0 && base == 10)
{
is_negative = 1;
n = -n;
}
while (n != 0)
{
int remainder = n % base;
buffer[i++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
n = n / base;
}
if (is_negative)
buffer[i++] = '-';
buffer[i] = '\0';
_reverse(buffer);
return (buffer);
}
