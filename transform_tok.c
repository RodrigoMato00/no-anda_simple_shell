#include "header.h"

/**
 * transform_tok - jddcd
 * @command: klfv{m,fvñlkdfxvmk
 * Return: ofkjdfp{ad,{pvad,fv,
 */
char *transform_tok(char *command)
{
	int i, j, k, col_flag = 0;
	char *buf, *path, *token;
	struct stat *bufstat = NULL;

	path = _getenv("PATH");
	bufstat = malloc(sizeof(struct stat));
	if (bufstat == NULL || command == NULL)
	{
		_free(2, path, bufstat);
		return (NULL);
	}
	col_flag = c_check(path, command, &buf, &bufstat);
	if (col_flag == 1)
	{
		_free(2, path, bufstat);
		return (buf);
	}
	token = strtok(path, ":");
	while (token)
	{
		i = _strlen(command), j = _strlen(token);
		mem_init(2, &buf, (i + j + 2));
		for (k = 0; k < (i + j); k++)
			buf[k] = '\0';
		buf = _strcat(buf, token, NULL);
		buf = _strcat(buf, command, "/");
		if (stat(buf, bufstat) == 0)
		{
			_free(2, path, bufstat);
			return (buf);
		}
		token = strtok(NULL, ":");
		_free(1, buf);
	}
	mem_init(2, &buf, i);
	buf = _strcpy(command, buf);
	_free(2, path, bufstat);
	return (buf);
}
