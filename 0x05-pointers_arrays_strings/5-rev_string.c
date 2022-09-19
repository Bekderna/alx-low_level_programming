#include "main.h"
#include <string.h>
/**
 *  rev_string- check the code
 *   @s : str
 *    * Return: void
 */
void rev_string(char *s)
{
	int i, x;
	char c;

	x = strlen(s);
	for (i = 0; i < x / 2; i++)
	{
		c = s[i];
		s[i] = s[x - i - 1];
		s[x - i - 1] = c;
	}
}
