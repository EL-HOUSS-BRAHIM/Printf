#include "main.h"
/**
 * my_par - Receives the main string and all the necessary parameters to
 * print a formatted string.
 * @format_str: A string containing all the desired characters.
 * @f_list: A list of all the possible functions.
 * @arg_list: A list containing all the arguments passed to the program.
 * Return: A total count of the characters printed.
 */
int my_par(const char *format_str, my_converter_t f_list[], va_list arg_list)
{
int i, j, r_val, printed_chars;
printed_chars = 0;
for (i = 0; format_str[i] != '\0'; i++)
{
if (format_str[i] == '%')
{
for (j = 0; f_list[j].sym != NULL; j++)
{
if (format_str[i + 1] == f_list[j].sym[0])
{
r_val = f_list[j].f(arg_list);
if (r_val == -1)
return (-1);
printed_chars += r_val;
break;
}
}
if (f_list[j].sym == NULL && format_str[i + 1] != ' ')
{
if (format_str[i + 1] != '\0')
{
_write(format_str[i]);
_write(format_str[i + 1]);
printed_chars = printed_chars + 2;
}
else
return (-1);
}
i = i + 1;
}
else
{
_write(format_str[i]);
printed_chars++;
}
}
return (printed_chars);
}
/**
 * print_plus_flag - Prints a plus sign before a positive number
 * @args: List of arguments
 * Return: The number of characters printed
 */
int print_plus_flag(va_list args)
{
int n;
int len = 0;
n = va_arg(args, int);
if (n >= 0)
{
_write('+');
len++;
}
len += print_num(args);
return (len);
}
/**
 * print_space_flag - Handles the space flag in formatting
 * @args: List of arguments
 * Return: The number of characters printed
 */
int print_space_flag(va_list args)
{
int n;
int printed_chars = 0;
n = va_arg(args, int);
if (n >= 0)
{
_write(' ');
printed_chars += 1;
}
return (printed_chars);
}
/**
 * print_hash_flag - Prints the '#' flag for octal and hexadecimal formats
 * @args: List of arguments
 * Return: The number of characters printed
 */
int print_hash_flag(va_list args)
{
_write('#');
(void)args;
return (1);
}
