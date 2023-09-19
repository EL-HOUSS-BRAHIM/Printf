#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int printed_chars = 0;
va_start(args, format);
while (*format)
{
if (*format != '%')
{
write(1, format, 1);
printed_chars++;
}
else
{
format++;
if (*format == 'c')
{
char c = va_arg(args, int);
write(1, &c, 1);
printed_chars++;
}
else if (*format == 's')
{
char *s = va_arg(args, char *);
if (s == NULL)
s = "(null)";
while (*s)
{
write(1, s, 1);
s++;
printed_chars++;
}
}
else if (*format == '%')
{
write(1, "%", 1);
printed_chars++;
}
else if (*format == 'd' || *format == 'i')
{
int num = va_arg(args, int);
char buffer[12];
int len = 0;
if (num < 0)
{
num = -num;
write(1, "-", 1);
printed_chars++;
}
do
{
buffer[len++] = num % 10 + '0';
num /= 10;
} while (num > 0);
while (len > 0)
{
write(1, &buffer[--len], 1);
printed_chars++;
}
}
}
format++;
}
va_end(args);
return printed_chars;
}
