#include "main.h"


/**
 * printf_int - that prints integer
 * @args: the arguments that will be printed
 * Return: Returns integer number of characters to be printed
 *
 */


/*====== PRINTF_INT FUNCTION ======*/

int printf_int(va_list args)
{
	int val = va_arg(args, int);
	int num, ld, d, x, i;

	i = 1;
	x = 1;
	ld = val % 10;
	val = val / 10;
	num = val;

	if (ld < 0)
	{
		_putchar('-');
		num = -num;
		ld = -ld;
		val = -val;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			num = num / 10;
			x = x * 10;
		}
		num = val;

		while (x > 0)
		{
			d = num / x;
			_putchar(d + '0');
			num = num - (d * x);
			x = x / 10;
			i++;
		}
	}
	_putchar(ld + '0');
	return (i);
}


/*====== PRINTF_INT FUNCTION ======*/

/**
 * printf_float - print float/decimal numbers
 * @args: the accepted arguments to print
 * Return: Return number of characters to be printed
 *
 */

int printf_float(va_list args)
{
	int val = va_arg(args, int);
	int num, ld, d, x, i;

	i = 1;
	x = 1;
	ld = val % 10;
	val = val / 10;
	num = val;

	if (ld < 0)
	{
		putchar('-');
		num = -num;
		ld = -ld;
		val = -val;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			num = num / 10;
			x = x * 10;
		}
		num = val;

		while (x > 0)
		{
			_putchar(d + '0');
			d = num / x;
			num = num - (d * x);
			x = x / 10;
			i++;
		}
	}
	_putchar(ld + '0');
	return (i);
}
