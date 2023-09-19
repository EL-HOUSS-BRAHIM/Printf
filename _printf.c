#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int parse_format(const char *format, va_list args);

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    if (!format)
        return (-1);

    count = parse_format(format, args);

    va_end(args);

    return (count);
}

int _putchar(char c)
{
    return write(1, &c, 1);
}

int print_string(char *str)
{
    int count = 0;

    if (str)
    {
        while (*str)
        {
            count += _putchar(*str);
            str++;
        }
    }
    else
    {
        const char *null_str = "(null)";
        while (*null_str)
        {
            count += _putchar(*null_str);
            null_str++;
        }
    }

    return count;
}

int parse_format(const char *format, va_list args)
{
    int count = 0;

    while (*format)
    {
        if (*format != '%')
        {
            count += _putchar(*format);
        }
        else
        {
            format++;
            if (*format == 'c')
            {
                char c = va_arg(args, int);
                count += _putchar(c);
            }
            else if (*format == 's')
            {
                char *s = va_arg(args, char *);
                count += print_string(s);
            }
            else if (*format == '%')
            {
                count += _putchar('%');
            }
        }
        format++;
    }

    return count;
}
