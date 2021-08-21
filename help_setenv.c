#include "header.h"

/**
 * help_setenv - jhodfjfomadocidmoi<mcds
 * @arrtok: sdklñf<ñlkdf<ñldkfmñlk<msdf
 * Return: oisjdfoijdfioñsjdfoids
 */
int help_setenv(char **arrtok)
{
	int i;

	for (i = 0; arrtok[i]; i++)
		;

	if (i != 3)
	{
		write(1, "Error: Wrong amount of arguments\n", 35);
		return (0);
	}

	_ssetenv(arrtok[1], arrtok[2], 1);

	return (0);
}
