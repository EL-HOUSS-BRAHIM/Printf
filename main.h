#pragma once
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(void);
int print_int(va_list args);
int print_int_helper(int n);
int p_buffer(char *buffer, int index);
int _putchar(char c);
int print_pointer(va_list args);
int print_hex(unsigned long int n, int uppercase);
int print_plus(va_list args);
int print_space(va_list args);
int print_hash(va_list args, char format);
int print_width(va_list args, int width);
int print_precision(va_list args, int precision);
int count_digits(int n);
int print_zero(va_list args);
int print_reverse(va_list args);
int print_rot13(va_list args);
int print_binary_helper(unsigned int num);
int print_unsigned_helper(unsigned int num);
int print_octal_helper(unsigned int num);
int print_hex_helper(unsigned int num, int uppercase);
int _puts(char *str);

#endif
