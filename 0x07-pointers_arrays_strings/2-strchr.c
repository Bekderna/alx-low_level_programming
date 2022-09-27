#include "main.h"

/**
 *  *  *_strchr- check the code
 *   *   @c : str
 *    *   @s : str
 *      *
 *       *    * Return: void
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *d;

	for (i = 0; s[i] != '\0'; i++)
	{
		d[i] = s[i];
		if (s[i] == c)
			break;
	}
	return (d);
}

