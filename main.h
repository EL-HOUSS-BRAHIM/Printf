#pragma once
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _printf(const char *format, ...);

/* Helpers */
int _putchar(char c);
int _strlen(const char *str);
char *_itoa(int n, char *buffer, int base);
char *_uitoa(unsigned int n, char *buffer, int base);
char *_reverse(char *str);

/* Conversion functions */
int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int print_unsigned(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_octal(va_list args);
int print_binary(va_list args);
int print_pointer(va_list args);
int print_percent(va_list args);

/* Custom Conversion functions */
int print_binary(va_list args);
int print_custom_str(va_list args);
int print_reversed_str(va_list args);
int print_rot13_str(va_list args);

/* Flags functions */
int print_plus_flag(va_list args);
int print_space_flag(va_list args);
int print_hash_flag(va_list args);
int print_zero_flag(va_list args);
int print_minus_flag(va_list args);

/* Length Modifiers functions */
int print_long(va_list args);
int print_short(va_list args);

/* Custom conversion specifier function */
int (*get_conversion_function(char specifier))(va_list);
