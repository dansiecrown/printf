#ifndef _PRINTF_MAIN_H
#define _PRINTF_MAIN_H


#include <stdarg.h>

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args __attribute__((unused)));
int print_int(va_list args);
int print_int_rec(unsigned int n);
int (*get_print_func(char c))(va_list);
int print_binary(va_list args);
int print_unsign(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_S(va_list args);
int print_pointer(va_list args);
int print_max_plus(va_list args __attribute__((unused)));


int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int print_binary_rec(unsigned int n);
int print_unsigned_rec(unsigned int n);
int print_octal_rec(unsigned int n);
int print_hex_rec(unsigned int n);
int print_HEX_rec(unsigned int n);
int print_pointer_rec(unsigned long int n, char *hex);
char get_len(const char *format, int i);
char get_flag(const char *format, int i);

#endif /* _PRINTF_MAIN_H */
