#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable number of arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
char c = va_arg(args, int);
write(1, &c, 1);
count++;
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
int len = 0;
while (str[len])
len++;
write(1, str, len);
count += len;
}
else if (*format == 'd' || *format == 'i')
{
int num = va_arg(args, int);
int temp = num;
int digits = 0;
if (num == 0)
{
write(1, "0", 1);
count++;
}
else if (num < 0)
{
write(1, "-", 1);
count++;
num = -num;
temp = -temp;
}
while (temp > 0)
{
temp /= 10;
digits++;
}
while (digits > 0)
{
int divisor = 1;
for (int i = 1; i < digits; i++)
divisor *= 10;
char digit = (num / divisor) + '0';
write(1, &digit, 1);
count++;
num %= divisor;
digits--;
}
}
else
{
write(1, "%", 1);
count++;
}
}
else
{
write(1, format, 1);
count++;
}
format++;
}
va_end(args);
return (count);
}
