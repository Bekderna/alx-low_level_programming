#include "main.h"
/**
 *  rev_string- check the code
 *   @s : str
 *    * Return: void
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
