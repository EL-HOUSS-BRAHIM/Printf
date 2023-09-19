#include "main.h"
/**
 * print_octal_helper - Helper function for printing octal representation.
 * @num: The unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_octal_helper(unsigned int num)
{
int printed_chars = 0;
if (num / 8)
printed_chars += print_octal_helper(num / 8);
printed_chars += _putchar((num % 8) + '0');
return (printed_chars);
}
/**
 * print_hex_helper - Helper function for printing hexadecimal representation.
 * @num: The unsigned integer to print.
 * @upper: A flag indicating whether to use uppercase letters (1) or lowercase (0).
 *
 * Return: The number of characters printed.
 */
int print_hex_helper(unsigned int num, int upper)
{
int printed_chars = 0;
const char *hex_digits = (upper) ? "0123456789ABCDEF" : "0123456789abcdef";
if (num / 16)
printed_chars += print_hex_helper(num / 16, upper);
printed_chars += _putchar(hex_digits[num % 16]);
return (printed_chars);
}
