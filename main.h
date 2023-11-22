#ifndef MAIN_H
#define MAIN_H

/**
 * Bibliothèques
 */

#include <limits.h> /* required library */
#include <stdio.h> /* required library */
#include <stdarg.h> /* Fonctions variadiques (va_list, va_start, va_end...) */

/**
 * Prototypes
 */

int _putchar(char c);
int _printf(const char *format, ...);
int _putstring(va_list args);
int _printpercent(void);
int _printinteger(va_list args);
int _printchar(va_list args);

#endif
