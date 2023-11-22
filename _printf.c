#include "main.h"

/**
 * _printf - prints formatted strings
 * @format: specified format
 * Return: int (number of characters printed)
*/

int _printf(const char *format, ...)
{
	int index = 0;

	va_list args;
	va_start (args, format);

	/* Stuff happens */

	va_end (args);

	return (index);
}
