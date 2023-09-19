#include "main.h"
/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * print_char - Prints a character.
 * @args: The arguments list.
 * Return: Number of characters printed.
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
_putchar(c);
return (1);
}
/**
 * print_str - Prints a string.
 * @args: The arguments list.
 * Return: Number of characters printed.
 */
int print_str(va_list args)
{
char *str = va_arg(args, char *);
int len = 0;
if (str == NULL)
str = "(null)";
while (str[len])
{
_putchar(str[len]);
len++;
}
return (len);
}
/**
 * print_int - Prints an integer.
 * @args: The arguments list.
 * Return: Number of characters printed.
 */
int print_int(va_list args)
{
int num = va_arg(args, int);
int count = 0;
if (num < 0)
{
_putchar('-');
count++;
num = -num;
}
if (num == 0)
{
_putchar('0');
count++;
}
if (num != 0)
{
int num_digits = 0;
int num_copy = num;
int divisor = 1;
int i;
while (num_copy != 0)
{
num_copy /= 10;
num_digits++;
}
for (i = 1; i < num_digits; i++)
divisor *= 10;
while (divisor != 0)
{
int digit = num / divisor;
_putchar('0' + digit);
count++;
num -= digit * divisor;
divisor /= 10;
}
}
return (count);
}
/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 * Return: Number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, j = 0, count = 0;
print_t specs[] = {
{'c', print_char},
{'s', print_str},
{'d', print_int},
{'i', print_int},
{0, NULL}
};
va_start(args, format);
while (format && format[i])
{
if (format[i] == '%' && format[i + 1])
{
j = 0;
while (specs[j].specifier)
{
if (format[i + 1] == specs[j].specifier)
{
count += specs[j].func(args);
i++;
break;
}
j++;
}
if (!specs[j].specifier)
_putchar(format[i]);
}
else
_putchar(format[i]);
count++;
i++;
}
va_end(args);
return (count);
}
