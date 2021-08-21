#include "header.h"

/**
 * check_signal - oifoipqwjeoijqwoiejrpwejrojwe
 * @sig_num: ehQWDJiuqwdiuHEUAIDaw
 */
void check_signal(int sig_num)
{
	(void)sig_num;
	signal(SIGINT, check_signal);
	write(1, "\n$ ", 3);
}
