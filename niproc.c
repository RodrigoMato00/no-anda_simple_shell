#include "header.h"

/**
 * niproc - djfñkljdsfñasdlzfmlmdf
 * @av: lñkajdñlkamñlkmdlfmñld
 * Return: lkjadhclakJDLjadldj
 */
int niproc(char *av[])
{
	pid_t child_pid;
	char *prname = av[0];
	int status;

	av++;
	if (get_cmd_func(av[0]))
	{
		if (get_cmd_func(av[0])(av))
			return (1);
	}
	else
	{
		av[0] = transform_tok(av[0]);
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Fork Error");
			return (0);
		}
		else if (child_pid == 0)
		{
			if (execve(av[0], av, NULL) == -1)
			{
				perror(prname);
				return (0);
			}
		}
		else if (child_pid != 0)
			wait(&status);
		return (1);
	}
	return (0);
}
