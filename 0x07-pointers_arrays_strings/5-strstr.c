#include "main.h"

/**
 *  *  *_strstr- check the code
 *   *   @haystack : str
 *    *   @needle : str
 *      *
 *       *    * Return: void
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, x;


	for (i = 0; haystack[i] != '\0'; i++)
	{
		x = 0;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				x++;
		}
		if (x == (j - 1))
				return (haystack + i - x);
	}
	return (0);
}

