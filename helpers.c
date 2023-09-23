 #include "main.h"
/**
 * print_char - Prints character
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_char(va_list list)
{
_write(va_arg(list, int));
return (1);
}
/**
 * print_str - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_str(va_list list)
{
int i;
char *str;
str = va_arg(list, char *);
if (str == NULL)
str = "(null)";
for (i = 0; str[i] != '\0'; i++)
_write(str[i]);
return (i);
}
/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
_write('%');
return (1);
}
/**
 * print_int - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_int(va_list list)
{
int num_length;
num_length = print_num(list);
return (num_length);
}
