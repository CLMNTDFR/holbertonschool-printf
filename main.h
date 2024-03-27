#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);

int _putchar(char c);

int _printchar(va_list args);

int _printpercent(va_list args);

int _printstring(va_list args);

/**
 * struct specifier_struct - structure to handle format specifiers
 * and run corresponding functions
 * @specifier: the format specifier character
 * @function: a function pointer to the corresponding data processing function
 */
struct specifier_struct
{
	char *specifier;
	int (*function)(va_list);
};

#endif
