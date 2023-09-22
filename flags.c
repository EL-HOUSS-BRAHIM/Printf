#include "main.h"

/**
 * print_plus_flag - Handles the '+' flag for integers
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_plus_flag(va_list args)
{
    int num = va_arg(args, int);
    char buffer[32];
    int len;

    if (num >= 0)
    {
        buffer[0] = '+';
        _itoa(num, buffer + 1, 10);
    }
    else
    {
        _itoa(num, buffer, 10);
    }

    len = _strlen(buffer);

    return write(1, buffer, len);
}


/**
 * print_space_flag - Handles the ' ' (space) flag for integers
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_space_flag(va_list args)
{
    int num = va_arg(args, int);
    char buffer[32];
    int len;

    if (num >= 0)
    {
        buffer[0] = ' ';
        _itoa(num, buffer + 1, 10);
    }
    else
    {
        _itoa(num, buffer, 10);
    }

    len = _strlen(buffer);

    return write(1, buffer, len);
}

/**
 * print_hash_flag - Handles the '#' flag for octal and hexadecimal
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_hash_flag(va_list args)
{
    char *prefix = va_arg(args, char *);
    char *str = va_arg(args, char *);

    return write(1, prefix, _strlen(prefix)) + write(1, str, _strlen(str));
}

/**
 * print_zero_flag - Handles the '0' flag for integers
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_zero_flag(va_list args)
{
    char *str = va_arg(args, char *);
    char sign = (str[0] == '-') ? '-' : ' ';
    int len = _strlen(str);

    write(1, &sign, 1);
    return write(1, str + 1, len - 1);
}

/**
 * print_minus_flag - Handles the '-' flag for alignment
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_minus_flag(va_list args)
{
    char *str = va_arg(args, char *);
    int len = _strlen(str);

    return write(1, str, len);
}
