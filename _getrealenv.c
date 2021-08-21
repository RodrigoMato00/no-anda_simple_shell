#include "header.h"

/**
 * _getrealenv - skdjfslkñdjfñlkcmlksdñvlsdd
 * @name: jkfklfkjalklkadijlvnadkjav
 * Return: fhañiodjfñoiajfñoiajdsfñijsd
 */
char *_getrealenv(const char *name)
{
	const char *namecpy;
	int i, j;

	for (i = 0; environ[i]; i++)
	{
		for (j = 0; environ[i][j]; j++)
		{
			namecpy = name;
			while (environ[i][j] == *namecpy)
			{
				j++;
				namecpy++;
			}
			if (*namecpy == '\0')
			{
				return (environ[i]);
			}
		}
	}

	return (NULL);
}
