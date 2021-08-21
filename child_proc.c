#include "header.h"

/**
 * child_proc - jjksdfs<dcm<lkdfmlkmdflñmd
 * @estat: ozdfjgasdofop<isidfo<isd
 * @ar: lfkfkgkdkfkskldsdllc
 * @cpy2: jksdjfdfldfos
 * @ipname: fjoojisdfjdijf<osdjf
 * Return: doijf<osdj<kdmf<dm
 */
exit_jrl *child_proc(exit_jrl *estat, char **ar, char *cpy2, char *ipname)
{
		if (ar[0] == NULL || *(ar[0]) == '\0')
		{
			_free(3, ar[0], cpy2, ar);
			estat = change_status(estat, NULL, estat->code, 1);
			return (estat);
		}
		if (execve(ar[0], ar, environ) == -1)
		{
			_free(3, ar[0], cpy2, ar);
			perror(ipname);
			estat = change_status(estat, NULL, 127, 1);
			return (estat);
		}

	return (estat);
}
