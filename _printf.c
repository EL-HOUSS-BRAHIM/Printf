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
