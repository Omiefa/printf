#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @m: The character to print
 * Return: Return (1) success otherwise -1 error
 *
 */

int _putchar(char m)
{
	return (write(1, &m, 1));
}
