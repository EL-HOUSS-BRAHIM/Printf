 #include "main.h"
/**
 * print_reversed - Calls a function to reverse and print a string
 * @arg: Argument passed to the function
 * Return: The amount of characters printed
 */
int print_reversed(va_list arg)
{
int len;
char *str;
char *ptr;
str = va_arg(arg, char *);
if (str == NULL)
return (-1);
ptr = rev_strapo(str);
if (ptr == NULL)
return (-1);
for (len = 0; ptr[len] != '\0'; len++)
_write(ptr[len]);
free(ptr);
return (len);
}
/**
 * print_rot13 - Converts string to rot13
 * @list: string to convert
 * Return: converted string
 */
int print_rot13(va_list list)
{
int i;
int x;
char *str;
char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
str = va_arg(list, char *);
if (str == NULL)
return (-1);
for (i = 0; str[i] != '\0'; i++)
{
for (x = 0; x <= 52; x++)
{
if (str[i] == s[x])
{
_write(u[x]);
break;
}
}
if (x == 53)
_write(str[i]);
}
return (i);
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
return (write(1, buffer, len));
}
/**
 * print_custom_str - Handles the custom '%S' conversion specifier
 * @args: The va_list containing the argument to print
 *
 * Return: The number of characters printed
 */
int print_custom_str(va_list args)
{
char *str = va_arg(args, char *);
int len = _strlen(str);
int i, count = 0;
for (i = 0; i < len; i++)
{
if (str[i] >= 32 && str[i] < 127)
{
write(1, &str[i], 1);
count++;
}
else
{
char hex[5];
hex[0] = '\\';
hex[1] = 'x';
hex[2] = (str[i] / 16) + '0';
hex[3] = (str[i] % 16) + ((str[i] % 16 > 9) ? 'A' - 10 : '0');
hex[4] = '\0';
write(1, hex, 4);
count += 4;
}
}
return (count);
}
