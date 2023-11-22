#include "main.h"

/**
 * _getFunction - selects the right function based on the specifier
 * @specifier: the character following %
 * Return: return type of the selected function (they're all int)
*/

int (*_getFunction (char *nextChar))(va_list)
{
	specification_t specificationStructure[] = {
		{'c', _printchar},
		{'s', _printstring},
		{'%', _printpercent},
		{'i', _printinteger},
		{'d', _printinteger},
		{'\0', NULL}
	};

	int index = 0;

	while (specificationStructure[index].specifier != '\0')
	{
		if (*nextChar == specificationStructure[index].specifier)
		{
			return (specificationStructure[index].function);
		}
		index++;
	}

	return (NULL);
}
