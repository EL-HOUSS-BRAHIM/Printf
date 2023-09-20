#include "main.h"
/**
 * get_conversion_function - Returns the conversion function for a specifier.
 * @spec: The conversion specifier.
 * Return: The corresponding conversion function or NULL if not found.
 */
static int (*get_conversion_function(char spec))(va_list)
{
typedef struct {
char specifier;
int (*func)(va_list);
} conversion_func_t;
conversion_func_t conversion_functions[] = {
{'c', convert_char},
{'s', convert_string},
{'%', convert_percent},
{'d', convert_integer},
{'i', convert_integer},
{'u', convert_unsigned},
{'o', convert_octal},
{'x', convert_hex},
{'X', convert_hex_upper},
{'b', convert_binary},   /* Custom */
{'S', convert_string_nonprint}, /* Custom */
{'p', convert_pointer}, /* Custom */
{'r', convert_reversed}, /* Custom */
{'R', convert_rot13}/* Custom */
};
int i;
for (i = 0; i < 14; i++)
{
if (conversion_functions[i].specifier == spec)
return conversion_functions[i].func;
}
return NULL;
}
/**
 * _printf - Prints formatted output to stdout.
 * @format: The format string.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
int i = 0;
va_start(args, format);
while (format && format[i])
{
if (format[i] != '%')
{
_putchar(format[i]);
count++;
}
else
{
int (*convert)(va_list);
i++;
if (format[i] == '\0')
break;
convert = get_conversion_function(format[i]);
if (convert)
count += convert(args);
else
{
_putchar('%');
_putchar(format[i]);
count += 2;
}
}
i++;
}
va_end(args);
return count;
}
