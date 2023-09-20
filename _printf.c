#include "main.h"
int handle_specifier(const char *format, va_list args);
/**
 * _printf - Our custom printf function
 * @format: The format string to print
 * @...: Additional arguments for format specifiers
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);

    while (format && *format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
                break;

            printed_chars += handle_specifier(format, args);
            format++;
        }
        else
        {
            _putchar(*format);
            printed_chars++;
            format++;
        }
    }

    va_end(args);
    return (printed_chars);
}

/**
 * handle_specifier - Handles format specifiers
 * @format: The format string after '%'
 * @args: The va_list of arguments
 *
 * Return: The number of characters printed for the specifier
 */
int handle_specifier(const char *format, va_list args)
{
    switch (*format)
    {
    case 'c':
        return convert_c(args);
    case 's':
        return convert_s(args);
    case 'd':
    case 'i':
        return convert_d(args);
    case 'u':
        return convert_u(args);
    case 'o':
        return convert_o(args);
    case 'x':
        return convert_x(args);
    case 'X':
        return convert_X(args);
    case 'b':
        return convert_b(args);
    case 'S':
        return convert_S(args);
    case 'p':
        return convert_p(args);
    case 'r':
        return convert_r(args);
    case 'R':
        return convert_R(args);
    default:
        _putchar('%');
        _putchar(*format);
        return (2);
    }
}
