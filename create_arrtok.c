#include "header.h"

/**
 * create_arrtok - <{lkdzmc<lkdzmvñ<lkdmzvlk<m x
 * @input: lñkamñl<kmcñlkm<dzc
 * @arrtok: <añdlkmc<{lzmkxñl<kdmz<
 * Return: ñakdlmñlkadmcñlkdmzcl
 */
char **create_arrtok(char *input, char **arrtok)
{
	int i;
	char *token;

	arrtok[0] = NULL;
	if (input == NULL)
		return (arrtok);
	token = strtok(input, " ");
	if (token == NULL)
		arrtok[0] = token;
	for (i = 0; token; i++)
	{
		arrtok[i] = token;
		token = strtok(NULL, " ");
	}
	if (i > 0)
		arrtok[i] = NULL;
	return (arrtok);
}
