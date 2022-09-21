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

	for (i = 1; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z' && c[i - 1] == ' ')
			c[i] = c[i] - 32;

	}
	return (c);
}
