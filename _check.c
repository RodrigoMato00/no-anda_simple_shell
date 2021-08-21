#include "header.h"

/**
 * c_check - ñlhlgfklbjkhvjtchfxfgx
 * @path: oijxciopjcxoipajjc
 * @command: ckjñckm<ñdklnxcmñklzmvñ<kmvl
 * @buf: p<dkc{<lñ,ck<sjkvi<fjmvkl<msdñlc,
 * @bufstat: {dlkfñ{<d,lc{ksodmvk<ld
 * Return: <{dñzklf<{dmv,kfxmvcñklfxv
 */
int c_check(char *path, char *command, char **buf, struct stat **bufstat)
{
	int i, j;

	for (i = 0; path[i]; i++)
	{
		if (path[i] == ':' && path[i + 1] == ':')
		{
			j = _strlen(command);
			mem_init(2, buf, (j + 2));
			*buf = null_init(*buf, (j + 3));
			*buf = _strcat(*buf, ".", NULL);
			*buf = _strcat(*buf, command, "/");
			if (!stat(*buf, *bufstat))
				return (1);
		}
	}
	return (0);
}
