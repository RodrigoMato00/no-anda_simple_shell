#include "header.h"

/**
 * null_init - kxjvnlxcnvñ<lnñlvjkn<zlñnv
 * @buffer: ñjdlk<mñ<kmdvñom<xckvlm<ñ
 * @size: <sdh<jmvmvñ<nsdjbnadfil
 * Return: jdjkmdojmñkomdvoiñds
 */
char *null_init(char *buffer, int size)
{
	int i;

	if (!buffer)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		buffer[i] = '\0';
	}

	return (buffer);
}
