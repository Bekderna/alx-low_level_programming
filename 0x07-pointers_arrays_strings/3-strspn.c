#include "main.h"

/**
 *  *  *_strspn- check the code
 *   *   @accept : str
 *    *   @s : str
 *      *
 *       *    * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, d;

	d = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				d++;
				break;
			}
		}
	}
		return (d);
}

