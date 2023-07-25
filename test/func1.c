#include "main.h"

/**
 * gr_print_str- function that prints input string to stdout
 * @s: pointer variable to strings of character
 * Return: 0 if successful and EOF on error
 */

int gr_print_str(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		gr_putchar(s[i]);
		count++;
	}
	return (count);
}

#include "main.h"

/**
 *gr_putchar- function that prints character to stdout
 *@m: character to be printed
 *Return: 1 if successful, -1 if it fails & EOF on error
 */

int gr_putchar(char m)
{
	return (write(1, &m, 1));
}
