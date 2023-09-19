#include "main.h"
/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: The variable arguments
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
va_list args;
int printed_chars = 0;
char buffer[1024];
int buffer_index = 0;
va_start(args, format);
while (format && format[printed_chars])
{
if (format[printed_chars] != '%')
{
buffer[buffer_index++] = format[printed_chars++];
if (buffer_index == 1024)
{
write(1, buffer, buffer_index);
buffer_index = 0;
}
}
else
{
char c;
int num;
printed_chars++;
switch (format[printed_chars])
{
case 'c':
c = va_arg(args, int);
buffer[buffer_index++] = c;
break;
case 's':
for (num = 0; num < 1024; num++)
{
char temp = va_arg(args, int);
if (!temp)
break;
buffer[buffer_index++] = temp;
}
break;
case '%':
buffer[buffer_index++] = '%';
break;
case '\0':
va_end(args);
return (-1);
}
printed_chars++;
}
}
write(1, buffer, buffer_index);
va_end(args);
return (printed_chars);
}
