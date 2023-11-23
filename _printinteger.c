#include "main.h"

/**
 * _putinteger - uses the _putchar function to print an integer
 * @number: the int being printed
 * Return: nothing (void)
*/

void _putinteger(int number)
{
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}

	if (number / 10)
	{
		_putinteger(number / 10);
	}

	_putchar(number % 10 + '0');
}

/**
 * _countDigit - counts the digits of the int being printed
 * @number: the int being printed
 * Return: int (length of the printed int)
*/

int _countDigit(int number)
{
	int count = 0;

	if (number == 0)
	{
		return (1);
	}

	while (number != 0)
	{
		number = number / 10;
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
	int number = va_arg(args, int);

	_putinteger(number);
	return (_countDigit(number));
}
