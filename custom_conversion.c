#include "main.h"
/**
 * convert_binary - Converts an unsigned integer to binary and prints it.
 * @args: The argument list containing the unsigned integer.
 * Return: The number of characters printed.
 */
int convert_binary(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
int count = 0;
print_binary(n);
count += 32; /* Assumes 32-bit unsigned int */
return count;
}
/**
 * convert_string_nonprint - Converts a string with non-printable characters
 *  and prints it.
 * @args: The argument list containing the string.
 * Return: The number of characters printed.
 */
int convert_string_nonprint(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
count += print_string_nonprint(str);
return count;
}
/**
 * convert_pointer - Converts a pointer address and prints it in hexadecimal.
 * @args: The argument list containing the pointer.
 * Return: The number of characters printed.
 */
int convert_pointer(va_list args)
{
void *ptr = va_arg(args, void *);
int count = 0;
_putchar('0');
_putchar('x');
count += print_hex((unsigned long)ptr, 1); /* Always use uppercase for pointer */
return count;
}
/**
 * convert_reversed - Converts a string and prints its reverse.
 * @args: The argument list containing the string.
 * Return: The number of characters printed.
 */
int convert_reversed(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
if (str != NULL) {
int length = strlen(str);
char *reversed_str = (char *)malloc((length + 1) * sizeof(char));
if (reversed_str != NULL) {
int i, j;
for (i = length - 1, j = 0; i >= 0; i--, j++) {
reversed_str[j] = str[i];
}
reversed_str[length] = '\0';
count += print_string_nonprint(reversed_str);
free(reversed_str);
}
}
return count;
}
/**
 * convert_rot13 - Converts a string and prints its ROT13 transformation.
 * @args: The argument list containing the string.
 * Return: The number of characters printed.
 */
int convert_rot13(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
if (str != NULL) {
int length = strlen(str);
char *rot13_str = (char *)malloc((length + 1) * sizeof(char));
if (rot13_str != NULL) {
int i;
for (i = 0; i < length; i++) {
char c = str[i];
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
char base = (c >= 'a') ? 'a' : 'A';
rot13_str[i] = (c - base + 13) % 26 + base;
} else {
rot13_str[i] = c;
}
}
rot13_str[length] = '\0';
count += print_string_nonprint(rot13_str);
free(rot13_str);
}
}
return count;
}
