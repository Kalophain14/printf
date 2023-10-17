#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**holds matching specifiers*/
typedef struct format
{
	char *id;
	int (*f)();
} match;


int _putchar(char c);
int _print_char(va_list character);
int print_str(va_list string);
int _print(const char *format, ...);
int _strlen(char *str); /**stores string length*/
int _strlenc(const char *str); /**stores constant length strings*/
int print_37(void);
int print_i(va_list args);
int print_d(va_list args);
int print_bi(va_list binary);
int print_unsign(va_list args);
int print_oct(va_list args);
int print_hexlower(va_list args);
int print_hexupper(va_list args);
int print_hexis(unsigned int num); /**function to print hexi strings for print_S*/
int print_s(va_list val);
int print_hexip(unsigned long int num); /**function to print hexi poiinters for hexiP*/
int print_pointer(va_list val);
int print_write(char c);
int _print_out(char *str); /**printsout write output*/

#endif
