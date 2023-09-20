#include "conversion.h"
#include "helpers.h"

/**
 * convert_c - Converts and prints a character
 * @args: The va_list containing the character to print
 *
 * Return: The number of characters printed
 */
int convert_c(va_list args)
{
    char c = va_arg(args, int);
    return write(1, &c, 1);
}

/**
 * convert_s - Converts and prints a string
 * @args: The va_list containing the string to print
 *
 * Return: The number of characters printed
 */
int convert_s(va_list args)
{
    char *str = va_arg(args, char *);
    if (!str)
        str = "(null)";
    return write(1, str, _strlen(str));
}

/**
 * convert_d - Converts and prints a decimal integer
 * @args: The va_list containing the integer to print
 *
 * Return: The number of characters printed
 */
int convert_d(va_list args)
{
    int num = va_arg(args, int);
    char num_str[12]; /* Maximum length of an integer as a string*/
    int length = _itoa(num, num_str);

    return write(1, num_str, length);
}

/**
 * convert_i - Converts and prints an integer
 * @args: The va_list containing the integer to print
 *
 * Return: The number of characters printed
 */
int convert_i(va_list args)
{
    return convert_d(args);
}

/**
 * convert_u - Converts and prints an unsigned integer
 * @args: The va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int convert_u(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char num_str[12]; /* Maximum length of an unsigned integer as a string*/
    int length = _itoa(num, num_str);

    return write(1, num_str, length);
}
