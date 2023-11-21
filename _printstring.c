#include "main.h"

/**
 * _putstring - prints a string to stdout
 * @str: The string to print
 *
 * Return: void
 */
void	_putstring(char *str)
{
	while (*str != '\0')
	{
		write(1, &(*str), 1);
		str++;
	}
}