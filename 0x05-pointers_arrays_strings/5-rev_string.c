#include "main.h"
/**
 *  rev_string- check the code
 *   @s : str
 *    * Return: void
 */
void rev_string(char *s)
{
	int i;
	char c;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		c = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = c;
	}
}
