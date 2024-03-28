#include "main.h"

/**
 * get_function - find the appropriate print function for the specifier
 * @specifier: the conversion specifier to find the handler for
 * @arguments: the va_list containing the arguments
 * Return: the number of characters printed by the handler function (2)
 */
int get_function(const char specifier, va_list arguments)
{
	format_handler array[] = {
	    {'c', _printchar},
		{'%', _printpercent},
		{'s', _printstring},
		{'d', _printinteger},
		{'i', _printinteger},
		{'\0', NULL}
	};
	int index = 0;

		while (array[index].specifier != '\0')
	{
		if (specifier == array[index].specifier)
		{
			return (array[index].function(arguments));
		}

		index++;
	}
	_putchar('%');
	_putchar(specifier);

	return (2);
}
