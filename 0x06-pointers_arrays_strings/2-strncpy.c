#include "main.h"
/**
 *  *_strncpy - check the code
 *   @src : str
 *   @dest : str
 *   @n : num
 *
 *    * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0';)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}