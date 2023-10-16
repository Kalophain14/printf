#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _printf_char(va_list character);
int printf_str(va_list string);
int _printf(const char *format, ...);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int printf_i(va_list args);
int printf_d(va_list args);
int printf_bi(va_list binary);
int printf_unsig(va_list args);
int printf_oct(va_list args)
int printf_hexlower(va_list args);
int printf_hexupper(va_list args);

#endif
