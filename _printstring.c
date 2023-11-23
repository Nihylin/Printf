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

    str = va_arg(args, char*);
    count = 0; 
    while (*str)
    {
        _putchar(*str);
        count++;
        str++;
    }
    if (str == NULL)
    {
        str = "(null)";
    }
    return (count);
}
