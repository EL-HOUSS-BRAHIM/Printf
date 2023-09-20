#pragma once

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
