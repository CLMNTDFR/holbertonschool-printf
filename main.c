#include <stdio.h>
#include "main.h"

/**
* main - entry point of the program
*
* Return: always 0 (Success)
*/
int main(void)
{
	int num = 985;

	char ch = 'X';

	char *str = "Hello, this function works perfectly";

	_printf("Testing _printf function\n");
	_printf("Integer: %d\n", num);
	_printf("Character: %c\n", ch);
	_printf("Integer (alternate specifier): %i\n", num);
	_printf("String: %s\n", str);
	_printf("Percent sign: %%\n");

	return (0);
}
