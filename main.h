#pragma once
/*conversion.h*/
#include <stdarg.h>

int convert_c(va_list args);
int convert_s(va_list args);
int convert_d(va_list args);
int convert_i(va_list args);
int convert_u(va_list args);
int convert_o(va_list args);
int convert_x(va_list args);
int convert_X(va_list args);
/*custom_conversion.h*/

#include <stdarg.h>

int convert_b(va_list args);
int convert_S(va_list args);
int convert_p(va_list args);
int convert_r(va_list args);
int convert_R(va_list args);

/*helpers.h*/
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _puts(char *str);
int _strlen(char *str);
int _itoa(int num, char *str);
int _utoa_binary(unsigned int num, char *bin_str);
int _ltoa_hex(unsigned long int num, char *hex_str);
int _print_hex(char num);
void _str_reverse(char *str, int length);

/*_printf.h*/

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
