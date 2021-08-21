#include "header.h"

/**
 * check_builtins - gfkjhbjfytdyrdrck
 * @token: lñkmdñlkfmzñlkxmvlkñzmfvñlkmz
 * @cpy2: kjnñdlvkmnxcñvjkñjsvnjklñl
 * @arrtok: iougtydyutfu
 * Return: ufytyrfilblulv
 */
int check_builtins(char *token, char *cpy2, char **arrtok)
{
	if (get_cmd_func(token))
	{
		if (get_cmd_func(token)(arrtok))
		{
			_free(3, token, cpy2, arrtok);
			return (1);
		}
		_free(3, token, cpy2, arrtok);
		return (0);
	}
	return (-1);
}
