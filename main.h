#ifndef MAIN_H
#define MAIN_H

#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * @plus: The '+' character
 * @space: The ' ' (space) character
 * @hash: The '#' character
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * @c: format specifier
 * @f: pointer to the corresponding printing function.
 */

typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/**print_integers*/
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);

/**print_bases 16, 2, & 8*/
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);

/**converts integers*/
char *convert(unsigned long int num, int base, int lowercase);

/**_printf*/
int _printf(const char *format, ...);

/**get_print*/
int (*get_print(char s))(va_list, flags_t *);

/**get_flag*/
int get_flag(char s, flags_t *f);

/**print_strings and characters*/
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);

/**write_functions*/
int _putchar(char c);
int _puts(char *str);

/**print_non_custom*/
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);

/**print_address*/
int print_address(va_list l, flags_t *f);

/**print_percent*/
int print_percent(va_list l, flags_t *f);

/**print length modifiers*/

/**print field width & precision*/

/**print 0 and dash(-) flag*/

/**all * work*/

#endif
