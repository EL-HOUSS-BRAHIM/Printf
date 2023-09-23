#pragma once
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * struct my_converter - defines a structure for symbols and functions
 *
 * @sym: The operator
 * @f: The function associated
 */
struct my_converter
{
char *sym;
int (*f)(va_list);
};
typedef struct my_converter my_converter_t;
/* Main functions */
int _strlen(const char *str);
int print_pointer(va_list args);
int my_par(const char *format_str, my_converter_t f_list[], va_list arg_list);
int _printf(const char *format_str, ...);
int _write(char);
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_num(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int print_rot13(va_list);
int print_unsigned(va_list);
int print_octal(va_list list);
int print_hex_lower(va_list list);
int print_hex_upper(va_list list);
/* Helper functions */
unsigned int base_l(unsigned int num, int base);
char *rev_strapo(char *);
void write_b(char *str);
char *memcpy_fr(char *dest, char *src, unsigned int n);
int print_unsigned_num(unsigned int);
int hex_check(int, char);
/* help2 */

int print_plus_flag(va_list args);
int print_space_flag(va_list args);
int print_hash_flag(va_list args);
int print_zero_flag(va_list args);
int print_minus_flag(va_list args);
