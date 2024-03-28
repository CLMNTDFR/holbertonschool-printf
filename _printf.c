#include "main.h"
/**
* _printf - Prints formatted output to stdout.
* @format: The format string containing placeholders.
* @...: Variable number of arguments to be formatted and printed.
*
* Return: The total number of characters printed.
*/
int _printf(const char *format, ...)
{
	int index = 0;

	int length_return = 0;

	va_list arguments;

	va_start(arguments, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			length_return += get_function(format[index + 1], arguments);
			index = index + 2;
		}
		else
		{
			length_return += _putchar(format[index]);
			index++;
		}
	}
	va_end(arguments);
	return (length_return);
}
