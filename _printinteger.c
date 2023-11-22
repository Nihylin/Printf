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
 * _countDigit - counts the digits of the int being printed
 * @n: the int being printed
 * Return: int (length of the printed int)
*/

int _countDigit(int n)
{
	int count = 0;

	if (n == 0)
	{
		return (1);
	}

	while (n != 0)
	{
		n = n / 10;
		++count;
	}

	return (count);
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
	return (_countDigit(n));
}
