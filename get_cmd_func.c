#include "header.h"

/**
 * get_cmd_func - ñojvñomvñlmvñlxmkvñjdf
 * @s: jldkñlxcvmñxmvñzmxcv
 * Return: kjdnñl<znvmñlkxmvñlkxmcvlkmvlñkm
 */
int (*get_cmd_func(char *s))(char **arrtok)
{
	built_jrl cmds[] = {
	{"env", _env},
	{"setenv", help_setenv},
	{"unsetenv", help_setenv},
	{"cd", _cd},
	{"exit", _eexit},
	{NULL, NULL}
	};
	int i = 0;

	while (cmds[i].cmd)
	{
		if (_strcmp(s, cmds[i].cmd))
			return (cmds[i].f);
		i++;
	}

	return (cmds[i].f);
}
