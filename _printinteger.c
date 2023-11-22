#include "main.h"

/**
 * _putinteger - uses the _putchar function to print an integer
 * @n: the int being printed
 * Return: nothing (void)
*/

void _putinteger(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		_putinteger(n / 10);
	}

	_putchar(n % 10 + '0');
}

/**
 * _printinteger - prints an integer
 * @args: list of arguments from variadic function printf
 * Return: int (length of the printed int)
 */

int _printinteger(va_list args)
{
	int n = va_arg(args, int);

	_putinteger(n);
	return (1);
}
