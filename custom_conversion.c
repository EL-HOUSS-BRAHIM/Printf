#include "main.h"
/**
 * convert_binary - Converts an unsigned integer to binary and prints it.
 * @args: The argument list containing the unsigned integer.
 * Return: The number of characters printed.
 */
int convert_binary(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
int count = 0;
print_binary(n);
count += 32; /* Assumes 32-bit unsigned int */
return count;
}
/**
 * convert_string_nonprint - Converts a string with non-printable characters
 *  and prints it.
 * @args: The argument list containing the string.
 * Return: The number of characters printed.
 */
int convert_string_nonprint(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
count += print_string_nonprint(str);
return count;
}
/**
 * convert_pointer - Converts a pointer address and prints it in hexadecimal.
 * @args: The argument list containing the pointer.
 * Return: The number of characters printed.
 */
int convert_pointer(va_list args)
{
void *ptr = va_arg(args, void *);
int count = 0;
_putchar('0');
_putchar('x');
count += print_hex((unsigned long)ptr, 1); /* Always use uppercase for pointer */
return count;
}
/**
 * convert_reversed - Converts a string and prints its reverse.
 * @args: The argument list containing the string.
 * Return: The number of characters printed.
 */
int convert_reversed(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
str = reverse_string(str);
count += print_string_nonprint(str);
return count;
}
/**
 * convert_rot13 - Converts a string and prints its ROT13 transformation.
 * @args: The argument list containing the string.
 * Return: The number of characters printed.
 */
int convert_rot13(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
str = rot13_string(str);
count += print_string_nonprint(str);
return count;
}
