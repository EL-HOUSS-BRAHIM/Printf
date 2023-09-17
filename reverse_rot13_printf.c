#include "main.h"
#include <string.h>
/**
 * print_reverse - Prints a reversed string.
 * @args: The variable argument list.
 *
 * Return: The number of characters printed.
 */
int print_reverse(va_list args)
{
char *str = va_arg(args, char *);
int printed_chars = 0;
int length = 0;
if (str == NULL)
{
str = "(null)";
}
length = strlen(str);
for (length--; length >= 0; length--)
{
_putchar(str[length]);
printed_chars++;
}
return (printed_chars);
}
/**
 * print_rot13 - Prints a rot13-encoded string.
 * @args: The variable argument list.
 *
 * Return: The number of characters printed.
 */
int print_rot13(va_list args)
{
char *str = va_arg(args, char *);
int printed_chars = 0;
int i;
if (str == NULL)
{
str = "(null)";
}
for (i = 0; str[i] != '\0'; i++)
{
if ((str[i] >= 'a' && str[i] <= 'z') ||
(str[i] >= 'A' && str[i] <= 'Z'))
{
_putchar(rot13_char(str[i]));
printed_chars++;
}
else
{
_putchar(str[i]);
printed_chars++;
}
}
return (printed_chars);
}
/**
 * rot13_char - Encodes a character using rot13.
 * @c: The character to be encoded.
 *
 * Return: The rot13-encoded character.
 */
char rot13_char(char c)
{
if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
{
return (c + 13);
}
else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
{
return (c - 13);
}
return (c);
}
