#include "header.h"

/**
 * proc - dkmfakñsmdvlkmfñlvkmañlkdmv
 * @input: {spdfk{s,dv{adpf,va{pdlf,ñv
 * @ipname: dkfmaksdlvklmvl
 * @estat: sdkf{pasd,c{pdfv,{po
 * Return: sdpkvpads,padf,vp{dfv
 */
exit_jrl *proc(char *input, char *ipname, exit_jrl *estat)
{
	pid_t child_pid;
	int status, i, builtin;
	char **arrtok, *inputcpy, *cpy2;


	i = _strlen(input), mem_init(4, &inputcpy, i, &cpy2, i);
	inputcpy = _strcpy(input, inputcpy), cpy2 = _strcpy(inputcpy, cpy2);
	i = count_tokens(inputcpy, " "), _free(1, inputcpy), minit2(2, &arrtok, i);
	arrtok = create_arrtok(cpy2, arrtok), arrtok[0] = transform_tok(arrtok[0]);
	builtin = check_builtins(arrtok[0], cpy2, arrtok);
	if (builtin == 1)
	{
		estat = change_status(estat, "Exit", estat->code, 1);
		return (estat);
	}
	else if (builtin == 0)
	{
		estat = change_status(estat, NULL, 0, 0);
		return (estat);
	}
	child_pid = fork();
	if (child_pid == -1)
	{
		_free(3, arrtok[0], cpy2, arrtok), perror("Error:");
		return (estat);
	}
	else if (child_pid == 0)
	{
		return (child_proc(estat, arrtok, cpy2, ipname));
	}
	else if (child_pid != 0)
	{
		wait(&status), _free(3, arrtok[0], cpy2, arrtok);
		estat = change_status(estat, NULL, WEXITSTATUS(status), estat->exit);
	}
	return (estat);
}
