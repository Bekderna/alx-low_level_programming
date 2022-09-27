#include "main.h"

/**
 *  *  *_memcpy - check the code
 *   *   @dest : str
 *    *   @src : str
 *     *   @n : num
 *      *
 *       *    * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = scr[i];
	return (dest);
}

