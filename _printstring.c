#include "main.h"

/**
* _printstring - prints a string
* @args: list of arguments from variadic function printf

* Return: int (length of the printed string)
*/
int _printstring(va_list args)
{
    char *string = va_arg(args, char *);
    int index;

    for (index = 0; string[index] != '\0'; index++)
    {
        _putchar(string[index]);
    }
    return (index);
}
