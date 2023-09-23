#include "main.h"
/**
 * my_par - Receives the main string and all the necessary parameters to
 * print a formatted string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the possible functions.
 * @arg_list: A list containing all the arguments passed to the program.
 * Return: A total count of the caharacters printed.
 */
int my_par(const char *format, my_converter_t f_list[], va_list arg_list)
{
int i, j, r_val, printed_chars;
printed_chars = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
for (j = 0; f_list[j].sym != NULL; j++)
{
if (format[i + 1] == f_list[j].sym[0])
{
r_val = f_list[j].f(arg_list);
if (r_val == -1)
return (-1);
printed_chars += r_val;
break;
}
}
if (f_list[j].sym == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_write(format[i]);
_write(format[i + 1]);
printed_chars = printed_chars + 2;
}
else
return (-1);
}
i = i + 1;
}
else
{
_write(format[i]);
printed_chars++;
}
}
return (printed_chars);
}
/**
 * print_hash - Prints a percent sign
 * @args: The va_list (not used)
 *
 * Return: The number of characters printed (always 1).
 */
int print_hash(va_list args)
{
(void)args;
_write('#');
return (1);
}
/**
 * print_mines - Prints a percent sign
 * @args: The va_list (not used)
 *
 * Return: The number of characters printed (always 1).
 */
int print_mines(va_list args)
{
(void)args;
_write('-');
return (1);
}
/**
 * print_space - Prints a percent sign
 * @args: The va_list (not used)
 *
 * Return: The number of characters printed (always 1).
 */
int print_space(va_list args)
{
(void)args;
_write(' ');
return (1);
}
