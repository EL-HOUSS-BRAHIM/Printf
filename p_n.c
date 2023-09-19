#include "main.h"
/**
 * print_unsigned - Prints an unsigned integer.
 * @args: The va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_unsigned(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int printed_chars = 0;
printed_chars += print_unsigned_helper(num);
return (printed_chars);
}
/**
 * print_octal - Prints an unsigned integer in octal format.
 * @args: The va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_octal(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int printed_chars = 0;
printed_chars += print_octal_helper(num);
return (printed_chars);
}
/**
 * print_custom_hex - Prints an unsigned integer in custom hexadecimal format.
 * @n: The unsigned long integer to print.
 * @uppercase: A flag indicating whether to use uppercase letters (1) or lowercase (0).
 *
 * Return: The number of characters printed.
 */
int print_custom_hex(unsigned long int n, int uppercase)
{
int printed_chars = 0;
const char *hex_digits = (uppercase) ? "0123456789ABCDEF" : "0123456789abcdef";
if (n / 16)
printed_chars += print_hex_helper(n / 16, uppercase);
printed_chars += _putchar(hex_digits[n % 16]);
return (printed_chars);
}
/**
 * print_hex_upper - Prints an unsigned integer in hexadecimal format (uppercase).
 * @args: The va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_hex_upper(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int printed_chars = 0;
printed_chars += print_custom_hex(num, 1);
return (printed_chars);
}
/**
 * print_unsigned_helper - Helper function for printing unsigned integers.
 * @num: The unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_unsigned_helper(unsigned int num)
{
int printed_chars = 0;
if (num / 10)
printed_chars += print_unsigned_helper(num / 10);
printed_chars += _putchar((num % 10) + '0');
return (printed_chars);
}
