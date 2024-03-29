#include "main.h"

/**
* _printchar - prints  character
* @args: list of arguments from variadic function printf
* Return: int (1, length of the printed character)
*/
int _printchar(va_list args)
{
		char c = va_arg(args, int);


		_putchar(c);
		return (1);
}
