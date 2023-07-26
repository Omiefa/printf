#include "main.h"

/**
 * parser - parse the format specifies int functions
 * @format: format specifiers
 * @funct_list: arraray of string
 * @args: arguments
 * Return: Return char
 */
int parser(const char *format, custom_conver_t funct_list[], va_list args)
{
	int i, j, r;
	int printchar;

	printchar = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; funct_list[j].id != NULL; j++)
			{
				if (format[i + 1] == funct_list[j].id[0])
				{
					r = funct_list[j].f(args);
					if (r == -1)
						return (-1);
					printchar += r;
					break;
				}
			}
			if (funct_list[j].id == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printchar = printchar + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printchar++;
		}
	}
	return (printchar);
}
