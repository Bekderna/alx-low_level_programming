#include "main.h"
/**
 *   cap_string - check the code
 *   @c : str
 *
 *    * Return: int
 */
char *cap_string(char *c)
{
	int i;

	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] = c[0] - 32;
	for (i = 1; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z' && c[i - 1] == ' ')
			c[i] = c[i] - 32;
	}
	return (c);
}
