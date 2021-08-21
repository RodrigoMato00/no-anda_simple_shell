#include "header.h"

/**
 * tokenize_cmds - ñlkdmñlk<mdñklmzñxvklcmxv
 * @input: skldmñ{<klmdvlkmy
 * @cmdtok: jjjjjjjjjjjjjjjjjjjjkkkkkkkkk
 * Return: <lkjdnxl<mzkm
*/
char **tokenize_cmds(char *input, char **cmdtok)
{
	int i;
	char *token, *inputcpy;

	i = _strlen(input), mem_init(2, &inputcpy, i);
	inputcpy = _strcpy(input, inputcpy);
	i = count_tokens(inputcpy, "\n;");
	minit2(2, &cmdtok, i);
	_free(1, inputcpy);
	token = strtok(input, "\n;");
	for (i = 0; token; i++)
	{
		cmdtok[i] = token;
		token = strtok(NULL, "\n;");
	}
	cmdtok[i] = NULL;
	return (cmdtok);
}
