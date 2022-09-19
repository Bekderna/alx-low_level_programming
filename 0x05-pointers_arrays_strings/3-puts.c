#include "main.h"
/**
 *  _puts - check the code
 *   @str : str
 *    * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i - 1] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
