#define _GNU_SOURCE
#include "header.h"

/**
 * main - alkjañlijfñpad
 * @argc: alksjañlksmc{asc{pamc
 * @argv: a{psjdapok´pakdocakdc
 * Return: a{sokdápskdpakos
 */
int main(int argc, char *argv[])
{
	exit_jrl *estat, estat_real;
	int i;
	char *input = NULL, **cmdtok = NULL;

	estat = &estat_real;
	estat->message = "Error", estat->code = 0, estat->exit = 0;
	if (argc > 1)
	{
		if (niproc(argv))
			return (0);
		return (1);
	}
	if (!isatty(STDIN_FILENO))
		estat = pipex(argv);
	else
	{
		signal(SIGINT, check_signal);
		while (1)
		{
			write(1, "($) ", 4);
			get_input(&input, estat);
			cmdtok = tokenize_cmds(input, cmdtok);
			for (i = 0; cmdtok[i]; i++)
			{
				estat = proc(cmdtok[i], argv[0], estat);
				if (estat->exit == 1)
					break;
			}
			if (estat->exit == 1)
				break;
			if (input)
				_free(2, input, cmdtok);
		}
		_free(2, cmdtok, input);
		exit(estat->code);
	}
	return (estat->code);
}
