#include "main.h"
/**
 * get_conversion_function - Gets the appropriate conversion function
 * @specifier: The conversion specifier character
 *
 * Return: A pointer to the corresponding conversion function
 */
int (*get_conversion_function(char specifier))(va_list)
{
    switch (specifier)
    {
    case 'c':
        return print_char;
    case 's':
        return print_str;
    case 'd':
    case 'i':
        return print_int;
    case 'u':
        return print_unsigned;
    case 'x':
        return print_hex_lower;
    case 'X':
        return print_hex_upper;
    case 'o':
        return print_octal;
    case 'b':
        return print_binary;
    case 'p':
        return print_pointer;
    case 'S':
        return print_custom_str;
    case '+':
        return print_plus_flag;
    case ' ':
        return print_space_flag;
    case '#':
        return print_hash_flag;
    case '0':
        return print_zero_flag;
    case '-':
        return print_minus_flag;
    case 'l':
        return print_long;
    case 'h':
        return print_short;
    case 'r':
        return print_reversed_str;
    case 'R':
        return print_rot13_str;
    default:
        return NULL;
    }
}
