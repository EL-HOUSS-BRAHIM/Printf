#include "main.h"
/**
 * print_char - Prints a character
 * @args: The argument list containing the character
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
return _putchar(c);
}
/**
 * print_string - Prints a string
 * @args: The argument list containing the string
 *
 * Return: The number of characters printed.
 */
int print_string(char *str)
{
int count = 0;
if (str == NULL)
str = "(null)";
while (*str != '\0')
{
_putchar(*str);
count++;
str++;
}
return count;
}
/**
 * print_int - Prints an integer
 * @args: The argument list containing the integer
 *
 * Return: The number of characters printed.
 */
int print_int(va_list args)
{
int n = va_arg(args, int);
int count = 0;
if (n < 0)
{
_putchar('-');
count++;
n = -n;
}
if (n / 10)
count += print_int(args);
_putchar(n % 10 + '0');
count++;
return count;
}
/**
 * print_unsigned_int - Prints an unsigned integer
 * @args: The argument list containing the unsigned integer
 *
 * Return: The number of characters printed.
 */
int print_unsigned_int(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int count = 0;
if (num / 10)
count += print_unsigned_int(args);
_putchar(num % 10 + '0');
count++;
return count;
}
/**
 * print_octal - Prints an unsigned integer in octal format
 * @args: The argument list containing the unsigned integer
 *
 * Return: The number of characters printed.
 */
int print_octal(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int count = 0;
char octal_digits[] = "01234567";
char octal[12];
int i = 0;
if (num == 0)
{
_putchar('0');
count++;
}
else
{
while (num > 0)
{
octal[i] = octal_digits[num % 8];
num = num / 8;
i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(octal[i]);
count++;
}
}
return count;
}
/**
 * print_hex_lower - Prints an unsigned integer in lowercase hexadecimal format
 * @args: The argument list containing the unsigned integer
 *
 * Return: The number of characters printed.
 */
int print_hex_lower(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int count = 0;
char hex_digits[] = "0123456789abcdef";
char hex[12];
int i = 0;
if (num == 0)
{
_putchar('0');
count++;
}
else
{
while (num > 0)
{
hex[i] = hex_digits[num % 16];
num = num / 16;
i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(hex[i]);
count++;
}
}
return count;
}
/**
 * print_hex_upper - Prints an unsigned integer in uppercase hexadecimal format
 * @args: The argument list containing the unsigned integer
 *
 * Return: The number of characters printed.
 */
int print_hex_upper(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int count = 0;
char hex_digits[] = "0123456789ABCDEF";
char hex[12];
int i = 0;
if (num == 0)
{
_putchar('0');
count++;
}
else
{
while (num > 0)
{
hex[i] = hex_digits[num % 16];
num = num / 16;
i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(hex[i]);
count++;
}
}
return count;
}
/**
 * print_str - Prints a string
 * @args: The va_list containing the string
 *
 * Return: The number of characters printed.
 */
int print_str(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;

    if (str == NULL)
        str = "(null)";

    while (*str)
    {
        _putchar(*str);
        count++;
        str++;
    }

    return count;
}

/**
 * print_unsigned - Prints an unsigned integer
 * @args: The va_list containing the unsigned integer
 *
 * Return: The number of characters printed.
 */
int print_unsigned(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char buffer[32];
    int len;

    _uitoa(num, buffer, 10);
    len = _strlen(buffer);

    return write(1, buffer, len);
}

/**
 * print_pointer - Prints a pointer address
 * @args: The va_list containing the pointer
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list args)
{
    void *ptr = va_arg(args, void *);
    char buffer[32];
    int len;

    sprintf(buffer, "%p", ptr);
    len = _strlen(buffer);

    return write(1, buffer, len);
}

/**
 * print_percent - Prints a percent sign
 * @args: The va_list (not used)
 *
 * Return: The number of characters printed (always 1).
 */
int print_percent(va_list args)
{
    (void)args;
    _putchar('%');
    return 1;
}
