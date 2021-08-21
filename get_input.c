#include "header.h"

/**
 * get_input - k<lzdmfñ<klmvñk<lmzdkld
 * @input: ñdlkzñ<lkmdzvlkxncvñljk<v
 * @estat: dkf<klñdmmlkñdlñkm<lk,zx l<
 * Return: ñlkadjzxck<lzmvñkl<m
 */
void get_input(char **input, exit_jrl *estat)
{
	int i;

	i = _getline(input);
	if (*input == NULL)
		return;
	if (i < 0)
	{
		write(1, "\n", 1);
		free(*input);
		exit(estat->code);
	}
	for (i = 0; (*input)[i]; i++)
		;
	if ((*input)[i - 1] == '\n')
		(*input)[i - 1] = '\0';
}
