#include "main.h"
#include <string.h>
/**
 *  puts_half- check the code
 *   @str : str
 *    * Return: void
 */
void puts_half(char *str)
{
	int i, x, a;

	x = strlen(str);
	a = x;
	if (x % 2 == 1)
		a = (x - 1);

	for (i = a / 2; i <= (x - 1); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
