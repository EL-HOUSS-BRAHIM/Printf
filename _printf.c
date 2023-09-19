#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Produces output according to a format.
 * @format: A string containing zero or more directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;
    int i = 0;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (!format[i])
                return (-1);
            if (format[i] == 'c')
                printed_chars += print_char(args);
            else if (format[i] == 's')
                printed_chars += print_str(args);
            else if (format[i] == '%')
                printed_chars += print_percent();
            else if (format[i] == 'd' || format[i] == 'i')
                printed_chars += print_int(args);
            else
            {
                printed_chars += _putchar('%');
                printed_chars += _putchar(format[i]);
            }
        }
        else
        {
            printed_chars += _putchar(format[i]);
        }
        i++;
    }

    va_end(args);

    return (printed_chars);
}

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * print_char - Prints a character.
 * @args: The va_list containing the character to print.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
    char c = va_arg(args, int);

    return (_putchar(c));
}

/**
 * print_str - Prints a string.
 * @args: The va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int print_str(va_list args)
{
    char *str = va_arg(args, char *);
    int printed_chars = 0;

    if (!str)
        str = "(null)";

    while (*str)
    {
        printed_chars += _putchar(*str);
        str++;
    }

    return (printed_chars);
}

/**
 * print_percent - Prints a percent character.
 *
 * Return: The number of characters printed (always 1).
 */
int print_percent(void)
{
    return (_putchar('%'));
}

/**
 * print_int - Prints an integer.
 * @args: The va_list containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int print_int(va_list args)
{
    int n = va_arg(args, int);
    int printed_chars = 0;

    if (n < 0)
    {
        printed_chars += _putchar('-');
        n = -n;
    }

    if (n / 10)
        printed_chars += print_int_helper(n / 10);

    printed_chars += _putchar((n % 10) + '0');

    return (printed_chars);
}

/**
 * print_int_helper - Helper function for printing integers recursively.
 * @n: The integer to print.
 *
 * Return: The number of characters printed.
 */
int print_int_helper(int n)
{
    int printed_chars = 0;

    if (n / 10)
        printed_chars += print_int_helper(n / 10);

    printed_chars += _putchar((n % 10) + '0');

    return (printed_chars);
}
