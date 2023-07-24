#ifndef MAIN_H
#define MAIN_H

/*Standard C Library Header Files*/
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/*Custom Function Prototype*/
int gr_putchar(char m);
int _printf(const char *format, ...);
int gr_print_format(char form_specifier, va_list arg_ptr);
int gr_print_str(va_arg(arg_ptr, char *));
int gr_print_digit(va_arg(arg_ptr, int), 10);
int gr_print_digit(va_arg(arg_ptr, unsigned int), 16);
int gr_print_char(va_arg(arg_ptr, int));

#endif
