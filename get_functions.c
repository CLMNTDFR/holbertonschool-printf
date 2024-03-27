#include "main.h"

/**
* get_function - find the function corresponding to the specifier
* @letter: pointer contain letter associate to function
*
* Return: NULL
*/
int (*get_function(char *letter))(va_list)
{
	specifier_struct function_pointer[] = {
		{"c", _printchar},
		{"i", },
		{"d", },
		{"s", },
		{"%", _printpercent},
		{NULL, NULL}
	};
	int index = 0;

	while (function_pointer[index].specifier != NULL)
	{
		if (function_pointer[index].specifier[0] == letter[0])
		{
			return (function_pointer[index].function);
		}
		index++;
	}
	return (NULL);
}
