#include "header.h"

/**
 * _strcat - oijcoiJÑOIIJMXMDOM
 * @dest: ñkaSJxpkcpkdc{pmd{pcm
 * @src: oidjcñijdcoñijdcñoiadcoida
 * @delim: ñwdokjcdjcldmcñkldmcklmd
 * Return: ljdjcñkldcld
 */
char *_strcat(char *dest, const char *src, const char *delim)
{
	unsigned int i, len;

	if (!dest || !src)
		return (NULL);

	len = _strlen(dest);

	if (delim)
		dest[len++] = *delim;

	for (i = 0; src[i]; len++, i++)
		dest[len] = src[i];
	dest[len] = src[i];

	return (dest);
}
