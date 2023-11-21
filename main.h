#ifndef MAIN_H
# define MAIN_H

/**
 * Bibliothèques
 */

# include <limits.h>
# include <stdarg.h> /* Fonctions variadiques (va_list, va_start, va_end...) */
# include <stdio.h>

/**
 * Prototypes
 */

int		_printf(const char *format, ...);
void	_putstring(char *str);
int		_putchar(char c);
void	_printpercent(char c);
void	_printinteger(int n);
void	_printchar(char c);

#endif
