#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * p_buffer - Print a buffer to stdout and reset it.
 * @buffer: The buffer containing the characters to print.
 * @index: The index of the last character in the buffer.
 *
 * Return: The number of characters printed.
 */
int p_buffer(char *buffer, int index)
{
int printed_chars;

printed_chars = write(1, buffer, index);
return (printed_chars);
}
