#include "custom_conversion.h"
#include "helpers.h"

/**
 * convert_b - Converts and prints an unsigned integer in binary
 * @args: The va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int convert_b(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char bin_str[33]; /* Maximum length of a 32-bit binary number as a string*/
    int length = _utoa_binary(num, bin_str);

    return write(1, bin_str, length);
}

/**
 * convert_S - Converts and prints a string with non-printable characters
 * @args: The va_list containing the string to print
 *
 * Return: The number of characters printed
 */
int convert_S(va_list args)
{
    char *str = va_arg(args, char *);
    int i, count = 0;

    if (!str)
        str = "(null)";

    for (i = 0; str[i]; i++)
    {
        if (str[i] < 32 || str[i] >= 127)
        {
            _putchar('\\');
            _putchar('x');
            count += 2;
            count += _print_hex(str[i]);
        }
        else
        {
            _putchar(str[i]);
            count++;
        }
    }

    return count;
}

/**
 * convert_p - Converts and prints a pointer address
 * @args: The va_list containing the pointer to print
 *
 * Return: The number of characters printed
 */
int convert_p(va_list args)
{
    unsigned long int addr = (unsigned long int)va_arg(args, void *);
    char hex_str[17]; /* Maximum length of a 64-bit hexadecimal number as a string*/
    int length = _ltoa_hex(addr, hex_str);

    _putchar('0');
    _putchar('x');

    return 2 + write(1, hex_str, length);
}

/**
 * convert_r - Converts and prints a reversed string
 * @args: The va_list containing the string to reverse and print
 *
 * Return: The number of characters printed
 */
int convert_r(va_list args)
{
    char *str = va_arg(args, char *);
    int length = _strlen(str);
    int i;
    for (i = length - 1; i >= 0; i--)
        _putchar(str[i]);

    return length;
}

/**
 * convert_R - Converts and prints a ROT13'ed string
 * @args: The va_list containing the string to ROT13 and print
 *
 * Return: The number of characters printed
 */
int convert_R(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;
    int i;
    if (!str)
        str = "(null)";

    for (i = 0; str[i]; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            char base = (str[i] >= 'A' && str[i] <= 'Z') ? 'A' : 'a';
            char rotated = ((str[i] - base + 13) % 26) + base;
            _putchar(rotated);
            count++;
        }
        else
        {
            _putchar(str[i]);
            count++;
        }
    }

    return count;
}
