#include "main.h"

/**
 *gr_putchar- function that prints character to stdout
 *@m: character to be printed
 *Return: 1 if successful and -1 if it fails
 */

int gr_putchar(char m)
{
	return (write(1, &m, 1));
}
