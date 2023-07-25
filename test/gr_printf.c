#include "main.h"

/**
 *_printf- function that mimic printf
 * @format: input format string
 *@...: variable arguments
 * Return: if successful print out count of character printed
 */

int _printf(const char *format, ...)
{
	va_list arg_ptr;
	unsigned int count;

	if (format == NULL)
		return (-1);

	va_start(arg_ptr, format);
	count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += gr_print_format(*(++format), arg_ptr);
		}
		else
		{
			count += gr_putchar(*format);
			++format;
		}
	}
	va_end(arg_ptr);
	gr_putchar('\n');
	return (count);
}
