#include "header.h"

/**
 * _strtok - dkfjgdjnfkjlzndzkjfn<kljd
 * @str: zkxvcmpmxvkzmlxv
 * @delim: lñdkvmñzlksdxmvñlkzmxdvc
 * @saveptr: dkmfzñ<kldmzñkol<mñskdlm
 * Return: l<kdmflk<mdzklvmzv-lkfxb -lz
 */
char *_strtok(char *str, const char *delim, char **saveptr)
{
	int i, j;

	if (str)
		*saveptr = str;
	for (i = 0; delim[i]; i++)
	{
		if (delim[i] == *saveptr[0])
		{
			*saveptr[0] = '\0';
			(*saveptr)++;
			continue;
		}
	}
	for (i = 0; *saveptr[i]; i++)
	{
		for (j = 0; delim[j]; j++)
		{
			if (delim[j] == *saveptr[i])
			{
				*saveptr[i] = '\0';
				*saveptr += (j + 1);
				return (*saveptr);
			}
		}
	}
	return (*saveptr);
}
