#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
/**
 * struct format - Struct to match format specifier with corresponding function
 * @specifier: The format specifier (e.g., 'c', 's', 'd', 'i', etc.)
 * @f: A pointer to the corresponding function to handle the specifier
 */
typedef struct format
{
char specifier;
int (*f)(va_list, const char *);
} format_t;
int _putchar(char c);
int _printf(const char *format, ...);
int process_format(const char *format, va_list args);
int print_char(va_list args, const char *format);
int print_string(va_list args, const char *format);
int print_char_with_width(va_list args, int width);
int print_char_with_zero_flag(va_list args);
int print_string_with_width(va_list args, int width);
int print_string_with_precision(va_list args, int precision);
int print_string_with_minus_flag(va_list args);
int print_string_with_zero_flag(va_list args);
int print_int(va_list args, const char *format);
int print_int_with_width(va_list args, int width);
int print_int_with_precision(va_list args, int precision);
int print_int_with_zero_flag(va_list args);
int print_int_with_minus_flag(va_list args);
int print_unsigned(va_list args, int base, int uppercase);
int print_unsigned_recursive(unsigned int num, int base, int uppercase);
int print_u(va_list args);
int print_o(va_list args);
int print_x(va_list args);
int print_X(va_list args);
int print_binary(va_list args);
int print_binary_recursive(unsigned int num);
int print_pointer(va_list args);
int print_hex_address(unsigned long int address);
int print_S(va_list args);
int print_hex(char c);
int print_length_modifier(va_list args, const char *format);
int print_width(va_list args, const char *format);
int print_precision(va_list args, const char *format);
int print_zero_flag(va_list args, const char *format);
int print_minus_flag(va_list args, const char *format);
int print_flag_plus(va_list args, int n, int *printed_chars);
int print_flag_space(va_list args, int n, int *printed_chars);
int print_flag_hash(va_list args, int n, int *printed_chars);
int print_reverse(va_list args);
int print_rot13(va_list args);
char rot13_char(char c);
#endif
