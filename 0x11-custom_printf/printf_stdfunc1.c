#include "main.h"


/*============PRINTING CHARACTER=====================*/

/**
 * print_char - prints a char.
 * @args: arguments
 * Return: Return (1)
 */

int print_char(va_list args)
{
	char str;

	str = va_arg(args, int);
	_putchar(str);
	return (1);
}


/*========PRINTING STRING===================*/

/**
 * print_string - print a string.
 * @args: argument pointer
 * Return: Return the length of the string
 *
 */

int print_string(va_list args)
{
	int i;
	const char *s;

	s = va_arg(args, const char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}


/*=========PRINTING % ================*/

/**
 * print_percent - prints the char 37 (%)
 * @args: arguments
 * Return: Return (1)
 *
 */

int print_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
