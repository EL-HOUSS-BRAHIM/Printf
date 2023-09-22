#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _strlen - Calculates the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */
int _strlen(const char *str)
{
    int len = 0;

    while (str[len])
        len++;

    return len;
}


/**
 * _itoa - Converts an integer to a string
 * @n: The integer to convert
 * @buffer: The buffer to store the result
 * @base: The base for conversion (e.g., 10 for decimal)
 *
 * Return: A pointer to the result string
 */
char *_itoa(int n, char *buffer, int base)
{
    int i = 0;
    int is_negative = 0;

    if (n == 0)
    {
        buffer[i++] = '0';
        buffer[i] = '\0';
        return buffer;
    }

    if (n < 0 && base == 10)
    {
        is_negative = 1;
        n = -n;
    }

    while (n != 0)
    {
        int remainder = n % base;
        buffer[i++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
        n = n / base;
    }

    if (is_negative)
        buffer[i++] = '-';

    buffer[i] = '\0';

    _reverse(buffer);

    return buffer;
}


/**
 * _uitoa - Converts an unsigned integer to a string
 * @n: The unsigned integer to convert
 * @buffer: The buffer to store the result
 * @base: The base for conversion (e.g., 10 for decimal)
 *
 * Return: A pointer to the result string
 */
char *_uitoa(unsigned int n, char *buffer, int base)
{
    int i = 0;

    if (n == 0)
    {
        buffer[i++] = '0';
        buffer[i] = '\0';
        return buffer;
    }

    while (n != 0)
    {
        int remainder = n % base;
        buffer[i++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
        n = n / base;
    }

    buffer[i] = '\0';

    _reverse(buffer);

    return buffer;
}

/**
 * _reverse - Reverses a string
 * @str: The string to reverse
 *
 * Return: A pointer to the reversed string
 */
char *_reverse(char *str)
{
    int start = 0;
    int end = _strlen(str) - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    return str;
}
