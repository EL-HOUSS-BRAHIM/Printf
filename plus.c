#include "main.h"
/**
 * convert_rot13 - Converts a string and prints its ROT13 transformation.
 * @args: The argument list containing the string.
 * Return: The number of characters printed.
 */
int convert_rot13(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
if (str != NULL)
{
int length = strlen(str);
char *rot13_str = (char *)malloc((length + 1) * sizeof(char));
if (rot13_str != NULL)
{
int i;
for (i = 0; i < length; i++)
{
char c = str[i];
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
char base = (c >= 'a') ? 'a' : 'A';
rot13_str[i] = (c - base + 13) % 26 + base;
}
else
{
rot13_str[i] = c;
}
}
rot13_str[length] = '\0';
count += print_string_nonprint(rot13_str);
free(rot13_str);
}
}
return (count);
}
/**
 * print_hex - Prints an unsigned integer in hexadecimal format to stdout.
 * @n: The unsigned integer to print.
 * @uppercase: Flag to use uppercase letters (1) or lowercase (0).
 * Return: The number of characters printed.
 */
int print_hex(unsigned int n, int uppercase)
{
int count = 0;
char hex_chars[16] = "0123456789abcdef";
if (uppercase)
{
hex_chars[10] = 'A';
hex_chars[11] = 'B';
hex_chars[12] = 'C';
hex_chars[13] = 'D';
hex_chars[14] = 'E';
hex_chars[15] = 'F';
}
if (n / 16)
{
count += print_hex(n / 16, uppercase);
}
_putchar(hex_chars[n % 16]);
count++;
return (count);
}
/**
 * print_binary - Prints an unsigned integer in binary format to stdout.
 * @n: The unsigned integer to print.
 */
void print_binary(unsigned int n)
{
if (n / 2)
{
print_binary(n / 2);
}
_putchar((n % 2) + '0');
}
