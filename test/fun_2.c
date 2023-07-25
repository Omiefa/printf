#include "main.h"

/**
 *gr_putint- function that prints integer values to stdout
 *@arg_ptr: pointer to format specifier list
 * Return: number of bytes
 */
int gr_putint(va_list arg_ptr)
{
	int p = va_arg(arg_ptr, int);
	int count;

	count = 0;
	if (p < 0)
	{
		gr_putc('-');
		count++;
		p = -p;
	}
	if (p == 0)
	{
		gr_putc('0');
		count++;
		return (count);
	}
	int digits[10];
	int p_Digits = 0;

	while (p > 0)
	{
		digits[p_Digits] = p % 10;
		p /= 10;
		p_Digits++;
	}
	int idex;
	for (idex = p_Digits - 1; idex >= 0; idex--)
	{
		gr_putc(digits[idex] + '0');
		count++;
	}
	return (count);
}
