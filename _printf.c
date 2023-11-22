#include "main.h"

/**
 * _printf - prints formatted strings
 * @format: specified format
 * Return: int (number of characters printed)
 */

int	_printf(const char *format, ...)
{
	int		count;
	int		(*function)(va_list);
	va_list	args;
	char	*next_Character;

	count = 0;
	va_start(args, format);
	next_Character = (args + 1);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
			format++;
		}
		if (*format == '%')
		{
			format++;
			function = _getFunction(next_Character);
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
		count++;
	}
	va_end(args);
	return (count);
}
