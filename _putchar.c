#include <unistd.h>
#include "main.h"
/**
 * _putchar - Write a character to stdout
 * @c: The character to write
 *
 * Return: On success, return the character written as an unsigned char cast
 *         to an int. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
