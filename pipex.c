#include "header.h"

/**
 * pipex - conducts processing of non-terminal input e.g. pipe
 * @argv: dokODM,COKDM,CK,DOC,D
 * Return: dkfgpdffglp{g,p{v,fpv,f
 */
exit_jrl *pipex(char **argv)
{
	int i;
	char **cmdtok = NULL, *input;
	exit_jrl *estat, estat_real;

	estat = &estat_real;
	estat->message = "Error", estat->code = 0, estat->exit = 0;
	get_input(&input, estat);
	cmdtok = tokenize_cmds(input, cmdtok);
	for (i = 0; cmdtok[i]; i++)
	{
		estat = proc(cmdtok[i], argv[0], estat);
		if (estat->exit == 1)
		{
			_free(2, input, cmdtok);
			return (estat);
		}
	}
	_free(2, input, cmdtok);
	return (estat);
}
