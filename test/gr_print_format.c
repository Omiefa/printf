#include "main.h"

/**
 *gr_print_format- function that print format specifiers to stdout
 *@form_specifier: the format specifiers to be printed
 *@arg_ptr: argument pointer that points to the variable list
 *Return: 0 if successful
 */

int gr_print_format(char form_specifier, va_list arg_ptr)
{
	int count;

	count = 0;

	if (form_specifier == 'c')
		count += gr_putchar(va_arg(arg_ptr, int));
	else if (form_specifier == 's')
		count += gr_putstr(va_arg(arg_ptr, char *));
	else if (form_specifier == '%')
		count += gr_putchar('%');
	else if (form_specifier == 'd' || form_specifier == 'i')
		count += gr_putint(va_arg(arg_ptr, int));
	else
		count += gr_putchar(form_specifier);

	gr_putc('\n');
	return (count);
}
