#include "header.h"

/**
 * count_tokens - {PAjkdakñlmcñlk<mazxclk
 * @input: ñl<djn<ñlkmzcxlñk<mdzvklñms
 * @delim: ñlsdkf,gkpof,{p,vdxfvp{z
 * Return: {dkpokdop,sd{,v{spdl,ñv
 */
int count_tokens(char *input, const char *delim)
{
	int count;
	char *token;

	token = strtok(input, delim);

	for (count = 0; token; count++)
		token = strtok(NULL, delim);

	return (count);
}
