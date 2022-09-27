#include "main.h"

/**
 *  *  *_strpbrk- check the code
 *   *   @accept : str
 *    *   @s : str
 *      *
 *       *    * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	if (s[i] != accept[j])
		return (0);
}

