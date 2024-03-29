#include "main.h"
/**
* _printpercent - prints a percent character
* @args: list of arguments from variadic function printf
* Return: int (1, length of the % char)
*/
int _printpercent(va_list args)
{
		(void) args;
		_putchar('%');
		return (1);
}
