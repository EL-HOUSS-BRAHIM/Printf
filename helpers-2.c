 #include "main.h"
/**
 * rev_strapo - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_strapo(char *s)
{
int len;
int head;
char tmp;
char *dest;
for (len = 0; s[len] != '\0'; len++)
{
}
dest = malloc(sizeof(char) * len + 1);
if (dest == NULL)
return (NULL);
memcpy_fr(dest, s, len);
for (head = 0; head < len; head++, len--)
{
tmp = dest[len - 1];
dest[len - 1] = dest[head];
dest[head] = tmp;
}
return (dest);
}
/**
 * write_b - sends characters to be written on standard output
 * @str: String to parse
 */
void write_b(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
_write(str[i]);
}
/**
 * base_l - Calculates the length for a number in a given base
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int base_l(unsigned int num, int base)
{
unsigned int i;
for (i = 0; num > 0; i++)
{
num = num / base;
}
return (i);
}
/**
 * memcpy_fr - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The memcpy_fr() function returns a pointer to dest.
 */
char *memcpy_fr(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
