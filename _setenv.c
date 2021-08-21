#include "header.h"

/**
 * _setenv - kfdkdfkdksksfksdksd
 * @name: oifkojdfkdfkfzgkzfgkx
 * @value: jpsdkfdkpjoipafjg<ñsdfk<djfiojd
 * @overwrite: iajgpiofjgoijdfpoijsdfojsdfl
 * Return: algo
 */
int _ssetenv(const char *name, const char *value, int overwrite)
{
	int nlen, vlen;
	char *env = NULL, *buffer = NULL;

	printf("%s\n", getenv("MAIL"));
	env = (_getrealenv(name));
	printf("%s\n", env);
	if (overwrite)
	{
		vlen = _strlen((char *)value);
		nlen = _strlen((char *)name);
		buffer = malloc(sizeof(char) * (vlen + nlen + 2));
		if (!buffer)
			return (1);
	}

	if (overwrite)
	{
		_strcpy((char *)name, buffer);
		*(buffer + nlen) = '=';
		_strcpy((char *)value, buffer + nlen + 1);

		env = buffer;
	}

	if (env)
		return (0);

	return (1);
}
