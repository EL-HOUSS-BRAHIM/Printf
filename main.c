#include "main.h"
#include <stdio.h>
int main(void)
{
int len;
len = _printf("Let's try: %%\n");
printf("Return value: %d\n", len);
len = _printf("Character: %c\n", 'H');
printf("Return value: %d\n", len);
len = _printf("String: %s\n", "Hello, World!");
printf("Return value: %d\n", len);
return (0);
}
