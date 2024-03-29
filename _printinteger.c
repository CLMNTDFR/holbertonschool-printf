#include "main.h"

/**
 * _putnumbers - recursive function that print an int
 * @number: number
*/

void _putnumbers(int number)
{
	/*changer into positive number*/
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}

	/*recursive function remove last digit of number*/
	if (number / 10)
		_putnumbers(number / 10);

	/*print last digit*/
	_putchar(number % 10 + '0');
}

/**
 * _counternumber - counter function
 * @number: number
 * Return: length of the number
 */

int _counternumber(int number)
{
	int counter = 0;

	if (number == 0)
		return (1);

	while (number != 0)
	{
		number = number / 10;
		counter++;
	}
	return (counter);
}

/**
 * _printnumbers - function that print numbers
 * @ListArguments: list of variadic arguments
 * Return: length of the number
*/

int _printnumbers(va_list ListArguments)
{
	int number = va_arg(ListArguments, int);

	_putnumbers(number);
	return (_counternumber(number));
}
