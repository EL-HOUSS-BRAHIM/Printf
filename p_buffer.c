#include "main.h"
/**
 * p_buffer - Prints characters using a local buffer.
 * @buffer: The local buffer for printing.
 * @idx: A pointer to the current index in the buffer.
 * @c: The character to be printed.
 * @printed_chars: A pointer to the total number of characters printed.
 */
void p_buffer(char *buffer, int *idx, char c, int *printed_chars)
{
if (*idx == 1024)
{
write(1, buffer, *idx);
*printed_chars += *idx;
*idx = 0;
}
buffer[*idx] = c;
(*idx)++;
}
/**
 * flush_buffer - Flushes the local buffer to stdout.
 * @buffer: The local buffer for printing.
 * @idx: The current index in the buffer.
 * @printed_chars: A pointer to the total number of characters printed.
 */
void flush_buffer(char *buffer, int idx, int *printed_chars)
{
if (idx > 0)
{
write(1, buffer, idx);
*printed_chars += idx;
}
}
