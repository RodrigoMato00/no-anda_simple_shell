#include "header.h"

/**
 * _strcpy - adojncñlaknmcñakjscmñklma
 * @src: adjklcmaldk{mcñoadkl
 * @dest: aojñaklmcñdanvñljn
 * Return: ñdjkncñalkdmñdmcñskdmkvml
 */
char *_strcpy(char *src, char *dest)
{
	int i;

	if (src == NULL || dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
