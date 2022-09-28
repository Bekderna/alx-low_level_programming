#include "main.h"

/**
 *  *  _strlen_recursion - check the code
 *   *  @s : srt
 *      *      *
 *       *       *    * Return: void
*/
int _strlen_recursion(char *s)
{
	int i;

	i++;
	if (*s == '\0')
	{
		return (i);
	}
	_strlen_recursion(s + 1)
	
}

