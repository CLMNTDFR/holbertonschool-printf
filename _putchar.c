#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the character c to standard output
* @c: the character to print
*
* Return: 1 (success)
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
/* 1:  sortie standard */
/* &c: adresse du caractère */
/* 1:  nombre de byte à écrire */
}
