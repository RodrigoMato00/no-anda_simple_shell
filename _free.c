#include "header.h"

/**
 * _free - jdn<oijdidf<dmlkm<dñlkm
 * @num: jdakfsdjnljsdndcm<doc
 * Return: zjodsjf<djfo<ijdfjdsf
 */
void _free(unsigned int num, ...)
{
	unsigned int i;
	va_list v_ls;
	char *temp;

	va_start(v_ls, num);
	for (i = 0; i < num; i++)
	{
		temp = va_arg(v_ls, char *);
		if (temp)
			free(temp);
	}
	va_end(v_ls);
}
