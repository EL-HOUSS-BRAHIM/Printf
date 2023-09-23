#include "main.h"
/**
 * _reverse - Reverses a string
 * @str: The string to reverse
 *
 * Return: A pointer to the reversed string
 */
char *_reverse(char *str)
{
int start = 0;
int end = _strlen(str) - 1;
while (start < end)
{
char temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
return (str);
}
