#include "main.h"
/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 * Return: On success, 1. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
/**
 * print_number - Prints an integer to stdout.
 * @n: The integer to print.
 * Return: The number of characters printed.
 */
int print_number(int n)
{
int count = 0;
int sign = 1;
if (n < 0)
{
_putchar('-');
sign = -1;
count++;
}
if (n / 10)
{
count += print_number((n / 10) * sign);
}

_putchar((n % 10) * sign + '0');
count++;

return count;
}
/**
 * print_unsigned - Prints an unsigned integer to stdout.
 * @n: The unsigned integer to print.
 * Return: The number of characters printed.
 */
int print_unsigned(unsigned int n)
{
int count = 0;
if (n / 10)
{
count += print_unsigned(n / 10);
}
_putchar((n % 10) + '0');
count++;
return count;
}
/**
 * print_octal - Prints an unsigned integer in octal format to stdout.
 * @n: The unsigned integer to print.
 * Return: The number of characters printed.
 */
int print_octal(unsigned int n)
{
int count = 0;
if (n / 8)
{
count += print_octal(n / 8);
}

_putchar((n % 8) + '0');
count++;

return count;
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
return count;
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
/**
 * print_string_nonprint - Prints a string with non-printable characters as escape sequences.
 * @str: The string to print.
 * Return: The number of characters printed.
 */
int print_string_nonprint(char *str)
{
int count = 0;
for (; *str; str++)
{
if (*str < 32 || *str >= 127)
{
count += _putchar('\\');
count += _putchar('x');
count += print_hex(*str, 1); /* Always use uppercase for non-printable */
}
else
{
count += _putchar(*str);
}
}
return count;
}
/**
 * reverse_string - Reverses a string in-place.
 * @str: The string to reverse.
 * Return: The reversed string.
 */
char *reverse_string(char *str)
{
int i, j;
char temp;
for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
}
return str;
}
/**
 * rot13_string - Applies the ROT13 transformation to a string.
 * @str: The string to apply ROT13 to.
 * Return: The ROT13'ed string.
 */
char *rot13_string(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
{
str[i] += 13;
}
else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
{
str[i] -= 13;
}
}
return str;
}
