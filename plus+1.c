#include "main.h"
/**
 * print_string_nonprint - Prints a string.
 * @str: The string to print.
 * Return: The number of characters printed.
 */
int print_string_nonprint(char *str)
{
int count = 0;
for (; *str; str++)
{
if (*str < 32 || *str >= 127)
{
count += _putchar('\\');
count += _putchar('x');
count += print_hex(*str, 1); /* Always use uppercase for non-printable */
}
else
{
count += _putchar(*str);
}
}
return (count);
}
/**
 * reverse_string - Reverses a string in-place.
 * @str: The string to reverse.
 * Return: The reversed string.
 */
char *reverse_string(char *str)
{
int i, j;
char temp;
for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
}
return (str);
}
/**
 * rot13_string - Applies the ROT13 transformation to a string.
 * @str: The string to apply ROT13 to.
 * Return: The ROT13'ed string.
 */
char *rot13_string(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
{
str[i] += 13;
}
else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
{
str[i] -= 13;
}
}
return (str);
}
