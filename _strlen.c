#include "header.h"

/**
 * _strlen - ñkjkap{k{c<dm{kmsdl
 * @str: ñaojañcmñaomñc
 * Return: iuahcoauishciuo
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	if (!str)
		return (0);
	while (str[len])
		len++;

	return (len);
}
