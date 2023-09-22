#include "main.h"

/**
 * print_binary - Handles the custom '%b' conversion specifier
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_binary(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char buffer[32];
    int len;

    _uitoa(num, buffer, 2);
    len = _strlen(buffer);

    return write(1, buffer, len);
}

/**
 * print_custom_str - Handles the custom '%S' conversion specifier
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_custom_str(va_list args)
{
    char *str = va_arg(args, char *);
    int len = _strlen(str);
    int i, count = 0;

    for (i = 0; i < len; i++)
    {
        if (str[i] >= 32 && str[i] < 127)
        {
            write(1, &str[i], 1);
            count++;
        }
        else
        {
            char hex[5];

            hex[0] = '\\';
            hex[1] = 'x';
            hex[2] = (str[i] / 16) + '0';
            hex[3] = (str[i] % 16) + ((str[i] % 16 > 9) ? 'A' - 10 : '0');
            hex[4] = '\0';

            write(1, hex, 4);
            count += 4;
        }
    }

    return count;
}

/**
 * print_reversed_str - Handles the custom '%r' conversion specifier
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_reversed_str(va_list args)
{
    char *str = va_arg(args, char *);
    char *reversed = _reverse(str);
    int len = _strlen(reversed);
    int count;

    count = write(1, reversed, len);

    free(reversed);

    return count;
}

/**
 * print_rot13_str - Handles the custom '%R' conversion specifier
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_rot13_str(va_list args)
{
    char *str = va_arg(args, char *);
    char *rot13 = strdup(str);
    int len = _strlen(rot13);
    int count;

    if (rot13)
    {
        int i;

        for (i = 0; i < len; i++)
        {
            char c = rot13[i];

            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            {
                char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
                rot13[i] = (c - base + 13) % 26 + base;
            }
        }

        count = write(1, rot13, len);
        free(rot13);
    }
    else
    {
        count = write(1, str, len);
    }

    return count;
}
