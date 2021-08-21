#include "header.h"

/**
 * _strcmp - checks two strings are equivalent
 * @s1: djfhljkdfnñsdmzlk
 * @s2: shjdlkwjfhlDJK
 * Return: IDJZCÑLDMCIO<MDÑOM
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}

	if (!s1[i] && !s2[i])
		return (1);
	return (0);
}
