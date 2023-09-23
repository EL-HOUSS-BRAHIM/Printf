 #include "main.h"
/**
 * _write - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _write(char c)
{
return (write(1, &c, 1));
}
/**
 * hex_check - Checks which hex function is calling it
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling it
 * Return: ASCII value for a letter
 */
int hex_check(int num, char x)
{
char *hex = "abcdef";
char *Hex = "ABCDEF";
num = num - 10;
if (x == 'x')
return (hex[num]);
else
return (Hex[num]);
return (0);
}
/**
 * print_unsigned - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int print_unsigned(va_list list)
{
unsigned int num;
num = va_arg(list, unsigned int);
if (num == 0)
return (print_unsigned_num(num));
if (num < 1)
return (-1);
return (print_unsigned_num(num));
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
return (len);
}
