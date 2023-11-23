#include "main.h"

/**
 * _printstring - prints a string
 * @args: list of arguments from variadic function printf
 * Return: int (length of the printed string)
 */

int _printstring(va_list args)
{
    int count;
    char *str;

    str = args;
    count = 0; 
    while (*str)
    {
        _putchar(*str);
        str++;
        count++;    
    }
    return (count);
}
