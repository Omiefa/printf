#ifndef MAIN_H
#define MAIN_H

/*Standard C Library Header Files*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct format - handle the conversions of printf specifiers
 * @id: Is a type of char pointer of printf specifiers to handle
 * @f: Is a type pointer to function for the conversion of the
 * printf specifiers
 * Return: Return the conversion
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


/*Custom Function Prototype*/
int gr_putchar(char m);
int gr_print_str(char *s);
int _printf(const char *format, ...);
int gr_print_format(char form_specifier, va_list arg_ptr);
int gr_print_digit(int value, int base);

#endif

