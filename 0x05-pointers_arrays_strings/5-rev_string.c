#include "main.h"
/**
 *  rev_string- check the code
 *   @s : str
 *    * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char a[_strlen(s)];

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		a[i] = s[i]
	}
	i--;
	for (; i >= 0; i--)
	{
		s[i] = a[j];
		j++
	}
}
