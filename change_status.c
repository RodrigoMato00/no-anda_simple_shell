#include "header.h"

/**
 * change_status - uyfdghlklluitfxxdy
 * @estat: lkckljf<dñlzmvñlkdmxvoiñ<d
 * @msg: oaijc<ñlkdfmñil<dfml
 * @cd: <ñkalñnkj<lcnljkdnckjl<
 * @flag: kjñdñlk<mdñklvmñksdlmvlñks
 * Return: lñkajlkm<zdñcklm<d
 */
exit_jrl *change_status(exit_jrl *estat, char *msg, int cd, int flag)
{
	if (msg)
		estat->message = msg;
	if (flag == 1 || flag == 0)
		estat->exit = flag;
	estat->code = cd;
	return (estat);
}
