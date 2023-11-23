#include "main.h"

/**
 * _printstring - prints a string
 * @args: list of arguments from variadic function printf
 * Return: int (length of the printed string)
 */

int _printstring(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}

	return (count);
}
