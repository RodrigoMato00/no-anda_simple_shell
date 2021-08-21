#include "header.h"

/**
 * _env - dfijsdopifjopsdfpo<sdjf
 * @arrtok: zfjnzñdnñdnd
 * Return: fgzojfgzfgzñfg
 */
int _env(char **arrtok)
{
	int i, len;

	(void)arrtok;
	for (i = 0; environ[i]; i++)
	{
		len = _strlen(environ[i]);
		write(1, environ[i], len);
		write(1, "\n", 1);
	}
	return (0);
}
