#pragma once

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
 * struct print - Struct to match format specifier with function
 * @specifier: The format specifier (e.g., 'c', 's', 'd', 'i', etc.)
 * @func: The function to handle the format specifier
 */
typedef struct print
{
    char specifier;
    int (*func)(va_list args);
} print_t;
int _printf(const char *format, ...);
