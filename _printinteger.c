#include "main.h"

/**
 * _printinteger - writes an integer to stdout
 * @n: The integer to print
 *
 * Return: The number of digits printed (excluding sign).
 */
void	_printinteger(int n)
{
	while (n != '/0')
		_putchar(n + '0');
}
