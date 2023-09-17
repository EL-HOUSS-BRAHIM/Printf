#include "main.h"
/**
 * print_length_modifier - Handles length modifiers for integers.
 * @args: The variable argument list.
 * @format: A pointer to the format specifier.
 *
 * Return: The number of characters printed.
 */
int print_length_modifier(va_list args, const char *format)
{
int printed_chars = 0;
int length_modifier = 0;
while (*format == 'l' || *format == 'h')
{
if (*format == 'l')
length_modifier++;
else if (*format == 'h')
length_modifier--;
format++;
}
if (*format == 'd' || *format == 'i')
printed_chars += print_int(args, format);
else if (*format == 'u')
printed_chars += print_unsigned(args, 10, 0);
else if (*format == 'o')
printed_chars += print_unsigned(args, 8, 0);
else if (*format == 'x')
printed_chars += print_unsigned(args, 16, 0);
else if (*format == 'X')
printed_chars += print_unsigned(args, 16, 1);
return (printed_chars);
}
/**
 * print_width - Handles the field width for non-custom conversion specifiers.
 * @args: The variable argument list.
 * @format: A pointer to the format specifier.
 *
 * Return: The number of characters printed.
 */
int print_width(va_list args, const char *format)
{
int printed_chars = 0;
int width = 0;
while (*format >= '0' && *format <= '9')
{
width = width * 10 + (*format - '0');
format++;
}
if (*format == 'd' || *format == 'i')
printed_chars += print_int_with_width(args, width);
else if (*format == 's')
printed_chars += print_string_with_width(args, width);
else if (*format == 'c')
printed_chars += print_char_with_width(args, width);
return (printed_chars);
}
/**
 * print_precision - Handles the precision for non-custom conversion specifiers.
 * @args: The variable argument list.
 * @format: A pointer to the format specifier.
 *
 * Return: The number of characters printed.
 */
int print_precision(va_list args, const char *format)
{
int printed_chars = 0;
int precision = 0;
format++;
while (*format >= '0' && *format <= '9')
{
precision = precision * 10 + (*format - '0');
format++;
}
if (*format == 'd' || *format == 'i')
printed_chars += print_int_with_precision(args, precision);
else if (*format == 's')
printed_chars += print_string_with_precision(args, precision);
return (printed_chars);
}
/**
 * print_zero_flag - Handles the '0' flag character for non-custom conversion specifiers.
 * @args: The variable argument list.
 * @format: A pointer to the format specifier.
 *
 * Return: The number of characters printed.
 */
int print_zero_flag(va_list args, const char *format)
{
int printed_chars = 0;
if (*format == 'd' || *format == 'i')
printed_chars += print_int_with_zero_flag(args);
else if (*format == 's')
printed_chars += print_string_with_zero_flag(args);
else if (*format == 'c')
printed_chars += print_char_with_zero_flag(args);
return (printed_chars);
}
/**
 * print_minus_flag - Handles the '-' flag character for non-custom conversion specifiers.
 * @args: The variable argument list.
 * @format: A pointer to the format specifier.
 *
 * Return: The number of characters printed.
 */
int print_minus_flag(va_list args, const char *format)
{
int printed_chars = 0;
if (*format == 'd' || *format == 'i')
printed_chars += print_int_with_minus_flag(args);
else if (*format == 's')
printed_chars += print_string_with_minus_flag(args);
else if (*format == 'c')
printed_chars += print_char(args, format);
return (printed_chars);
}
