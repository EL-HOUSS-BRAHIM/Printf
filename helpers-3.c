 #include "main.h"
/**
 * print_num - prints a number sent to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int print_num(va_list args)
{
int n;
int div;
int len;
unsigned int num;
n = va_arg(args, int);
div = 1;
len = 0;
if (n < 0)
{
len += _write('-');
num = n * -1;
}
else
num = n;
for (; num / div > 9;)
div *= 10;
for (; div != 0;)
{
len += _write('0' + num / div);
num %= div;
div /= 10;
}
return (len);
}
/**
 * print_unsigned_num - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int print_unsigned_num(unsigned int n)
{
int div;
int len;
unsigned int num;
div = 1;
len = 0;
num = n;
for (; num / div > 9;)
div *= 10;
for (; div != 0;)
{
len += _write('0' + num / div);
num %= div;
div /= 10;
}
return (len);
}
/**
 * print_zero - Prints a percent sign
 * @args: The va_list (not used)
 *
 * Return: The number of characters printed (always 1).
 */
int print_zero(va_list args)
{
(void)args;
_write('0');
return (1);
}
/**
 * print_plus - Prints a percent sign
 * @args: The va_list (not used)
 *
 * Return: The number of characters printed (always 1).
 */
int print_plus(va_list args)
{
(void)args;
_write('+');
return (1);
}
