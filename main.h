#ifndef MAIN_H
#define MAIN_H
#pragma once
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(void);
int print_int(va_list args);
int print_int_helper(int n);

#endif
