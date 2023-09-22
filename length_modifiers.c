#include "main.h"
/**
 * print_long - Handles the 'l' length modifier for integers
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_long(va_list args)
{
    long int num = va_arg(args, long int);
    char buffer[32];
    int len;

    _itoa((int)num, buffer, 10);
    len = _strlen(buffer);

    return write(1, buffer, len);
}

/**
 * print_short - Handles the 'h' length modifier for integers
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_short(va_list args)
{
    short int num = (short int)va_arg(args, int);
    char buffer[32];
    int len;

    sprintf(buffer, "%d", (int)num);
    len = _strlen(buffer);

    return write(1, buffer, len);
}
