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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	return (s);
}

