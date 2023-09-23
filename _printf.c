#include "main.h"
/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formatted string
 * @format_str: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format_str, ...)
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
{"p", print_pointer},
{"S", print_custom_str},
{NULL, NULL}
};
va_list arg_list;
if (format_str == NULL)
return (-1);
va_start(arg_list, format_str);
printed_characters = my_par(format_str, f_list, arg_list);
va_end(arg_list);
return (printed_characters);
}
