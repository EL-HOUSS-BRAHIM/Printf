#include "helpers.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success, returns the character written; On error, -1 is returned
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _puts - Writes a string to stdout
 * @str: The string to write
 *
 * Return: The number of characters written
 */
int _puts(char *str)
{
    int length = _strlen(str);
    return write(1, str, length);
}

/**
 * _strlen - Computes the length of a string
 * @str: The string to compute the length of
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
    int length = 0;

    while (str[length])
        length++;

    return length;
}

/**
 * _itoa - Converts an integer to a string
 * @num: The integer to convert
 * @str: The buffer to store the resulting string
 *
 * Return: The length of the string
 */
int _itoa(int num, char *str)
{
    int i = 0;
    int is_negative = 0;

    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return 1;
    }

    if (num < 0)
    {
        is_negative = 1;
        num = -num;
    }

    while (num != 0)
    {
        int digit = num % 10;
        str[i++] = digit + '0';
        num /= 10;
    }

    if (is_negative)
        str[i++] = '-';

    str[i] = '\0';

    _str_reverse(str, i);

    return i;
}

/**
 * _utoa_binary - Converts an unsigned integer to a binary string
 * @num: The unsigned integer to convert
 * @bin_str: The buffer to store the resulting binary string
 *
 * Return: The length of the binary string
 */
int _utoa_binary(unsigned int num, char *bin_str)
{
    int i = 0;

    if (num == 0)
    {
        bin_str[i++] = '0';
        bin_str[i] = '\0';
        return 1;
    }

    while (num != 0)
    {
        int bit = num % 2;
        bin_str[i++] = bit + '0';
        num /= 2;
    }

    bin_str[i] = '\0';

    _str_reverse(bin_str, i);

    return i;
}

/**
 * _ltoa_hex - Converts a long integer to a hexadecimal string
 * @num: The long integer to convert
 * @hex_str: The buffer to store the resulting hexadecimal string
 *
 * Return: The length of the hexadecimal string
 */
int _ltoa_hex(unsigned long int num, char *hex_str)
{
    int i = 0;

    if (num == 0)
    {
        hex_str[i++] = '0';
        hex_str[i] = '\0';
        return 1;
    }

    while (num != 0)
    {
        int digit = num % 16;
        hex_str[i++] = (digit < 10) ? digit + '0' : digit - 10 + 'a';
        num /= 16;
    }

    hex_str[i++] = 'x';
    hex_str[i++] = '0';
    hex_str[i] = '\0';

    _str_reverse(hex_str, i);

    return i;
}

/**
 * _print_hex - Writes a hexadecimal number to stdout
 * @num: The hexadecimal number to write
 *
 * Return: The number of characters written
 */
int _print_hex(char num)
{
    char hex_str[3];
    int length;

    if (num < 16)
    {
        hex_str[0] = '0';
        length = _ltoa_hex(num, hex_str + 1);
    }
    else
    {
        length = _ltoa_hex(num, hex_str);
    }

    return write(1, hex_str, length);
}

/**
 * _str_reverse - Reverses a string
 * @str: The string to reverse
 * @length: The length of the string
 */
void _str_reverse(char *str, int length)
{
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
