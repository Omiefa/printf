#ifndef MAIN_H
#define MAIN_H

/*Standard C Library Header Files*/
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/*Custom Function Prototype*/
int gr_putchar(char m); 
int gr_print_str(char *s);
int _printf(const char *format, ...);
int gr_print_format(char form_specifier, va_list arg_ptr);
int gr_print_digit(int value, int base);

#endif

