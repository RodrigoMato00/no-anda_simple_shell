#include "header.h"

/**
 * _getenv - <osdf<ojdoii<mcmkdoicñmsdño
 * @name: ñlkjdfnñlk<mvlñk<mxvlñkm<
 * Return: opisdjpoidjpoidsjop
 */
char *_getenv(const char *name)
{
	const char *namecpy = name;
	char *environcpy;
	int i, j, envlen;

	for (i = 0; environ[i]; i++)
	{
		for (j = 0; environ[i][j] == namecpy[j]; j++)
			;
		if (namecpy[j] == '\0')
		{
			envlen = _strlen(environ[i] + j);
			environcpy = malloc(sizeof(char) * (envlen + 1));
			_strcpy(environ[i] + j, environcpy);
			return (environcpy);
		}
	}
	return (NULL);
}
