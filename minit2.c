#include "header.h"

/**
 * minit2 - iowedñijdlñkmdñklmlkmdc
 * @num: duhjflkñjadfñlj
 */
void minit2(int num, ...)
{
	va_list v_ls;
	char ***v_arg;

	va_start(v_ls, num);
	for (; num; num -= 2)
	{
		v_arg = va_arg(v_ls, char ***);
		*v_arg = malloc(sizeof(char *) * (va_arg(v_ls, int) + 1));
		if (*v_arg == NULL)
			return;
	}
}
