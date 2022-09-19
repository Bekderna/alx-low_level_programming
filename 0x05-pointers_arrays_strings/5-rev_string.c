#include "main.h"
#include <string.h>
/**
 *  rev_string- check the code
 *   @s : str
 *    * Return: void
 */
void rev_string(char *s)
{
	int i;
	char c;

	for (i = 0; i < strlen(s) / 2; i++)
	{
		c = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = c;
	}
}
