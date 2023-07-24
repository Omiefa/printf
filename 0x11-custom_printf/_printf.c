#include "main.h"

/**
 * _printf - printf function
 * @format: format specifiers to search for
 * Return: Return printed chars
 *
 */

int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%i", printf_int},
		{"%d", print_float}
	};

	va_list args;
	int i, j, l;

	l = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[i] == format[i + 1])
			{
				l += m[j].f(args);
				i = i + 1;
				break;
			}
			j++;
		}
		if (j < 0)
		{
			_putchar(format[i]);
			l++;
		}
	}
	va_end(args);
	return (l);
}
