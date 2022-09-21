#include "main.h"
/**
 *  _strcmp - check the code
 *   @s1 : str
 *   @s2 : str
 *
 *    * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
		else
			continue;
	}
	return (j);
}
