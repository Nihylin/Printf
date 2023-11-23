#include "main.h"

/**
 * _printf - prints formatted strings
 * @format: specified format
 * Return: int (number of characters printed)
 */

int _printf(const char *format, ...)
{
	int count = 0;
	int (*function)(va_list);
	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			function = _getFunction(format);
			if (function)
			{
				count += function(args);
			}
			else
			{
				_putchar(*format);
				count += 2;
			}
		}
		format++;
	}

	va_end(args);
	return (count);
}
