#include "main.h"

/**
 *  *  *_memset - check the code
 *   *   @s : str
 *    *   @b : str
 *     *   @n : num
 *      *
 *       *    * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		s[i] = b;
	return(s);
}

