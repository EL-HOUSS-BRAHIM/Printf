#pragma once
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
char specifier;
int (*func)(va_list);
} conversion_func_t;
int _printf(const char *format, ...);
int convert_char(va_list args);
int convert_string(va_list args);
int convert_percent(va_list args);
int convert_integer(va_list args);
int convert_unsigned(va_list args);
int convert_octal(va_list args);
int convert_hex(va_list args);
int convert_hex_upper(va_list args);
int convert_binary(va_list args);
int convert_string_nonprint(va_list args);
int convert_pointer(va_list args);
int convert_reversed(va_list args);
int convert_rot13(va_list args);
int _putchar(char c);
int print_number(int n);
int print_unsigned(unsigned int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n, int uppercase);
void print_binary(unsigned int n);
int print_string_nonprint(char *str);
char *reverse_string(char *str);
char *rot13_string(char *str);
