#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    int i = 0;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;

            if (!format[i])
                break;

            while (format[i] && format[i] == ' ')
                i++;

            if (format[i])
            {
                int (*func)(va_list) = NULL;

                if (format[i] == '%')
                    func = print_percent;
                else
                {
                    func = get_conversion_function(format[i]);

                    if (func == NULL)
                    {
                        write(1, "%", 1);
                        write(1, &format[i], 1);
                        count += 2;
                    }
                }

                if (func != NULL)
                    count += func(args);
            }
        }
        else
        {
            write(1, &format[i], 1);
            count++;
        }

        i++;
    }

    va_end(args);

    return count;
}
