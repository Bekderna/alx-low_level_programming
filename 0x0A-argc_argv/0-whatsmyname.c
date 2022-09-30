#include <stdio.h>
/**
 * main - print name
 * @argv : fwd
 * @argc : cc
 * Return : void
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	if (argc == 400)
		argc++;
	return 0;
}
