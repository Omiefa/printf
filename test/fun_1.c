#include "main.h"

/**
 * gr_putc- function that prints character to stdout
 * @m: character to be printed
 * Return: 1 if successful ans -1 if it fails
 */
int gr_putc(char m)
{
	return (write(1, &m, 1));
}

/**
 *gr_putchar- function that prints character to stdout
 *@arg_ptr: pointer to list
 *Return: 1 if successful and -1 if it fails
 */

int gr_putchar(va_list arg_ptr)
{
	char h = va_arg(arg_ptr, int);
	int count;

	count = 0;
	count += gr_putc(h);
	return (count);
}

/**
 * gr_putstr- prints strings of character to stdout
 * @arg_ptr: pointer to list
 * Return: number of printed character
 */

int gr_putstr(va_list arg_ptr)
{
	char *s = va_arg(arg_ptr, char *);
	int count, i;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		gr_putc(s[i]);
		count++;
	}
	return (count);
}
