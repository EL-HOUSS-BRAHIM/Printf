#include "main.h"

int main(void)
{
	int len;

	len = _printf("Let's try some format specifiers:\n");
	_printf("Character: %c\n", 'A');
	_printf("String: %s\n", "Hello, World!");
	_printf("Integer: %d\n", 12345);
	_printf("Another Integer: %i\n", -6789);
	_printf("Length modifier l: %ld\n", 1234567890L);
	_printf("Null String: %s\n", NULL);
	_printf("Mixed: %s %d %c\n", "Text", 123, 'X');
	len += _printf("Total characters printed: %d\n", len);
	return (0);
}
