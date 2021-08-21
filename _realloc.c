#include "header.h"

/**
 * _realloc - ñklzvojxvo<jsdpom<osdmv
 * @ptr: ojfopisjdvposdmvpoiapoi
 * @old_size: xpoijpoisjvpovpoafnpodnf
 * @new_size: <odj<povno<ndvo<nmxkñvlcm
 * Return: pofijomvzofdmvpodmfxgñ
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *buffer, *c_ptr;

	/* Return pointer if no change must be made */
	if (new_size == old_size)
		return (ptr);

	/* Free ptr and return NULL if new_size is 0 and ptr is not NULL */
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	/* Set new char pointer to the same element as ptr */
	c_ptr = (char *) ptr;

	/* Allocate memory for pointer of new block */
	buffer = malloc(new_size);
	if (!buffer)
		return (NULL);

	/* Return buffer if pointer is NULL */
	if (!ptr)
		return (buffer);

	null_init(buffer, new_size);
	/* Set new block memory to old block memory */
	for (i = 0; (i < old_size) && (i < new_size); i++)
	{
		buffer[i] = c_ptr[i];
	}

	/* Type cast new pointer back to void */
	buffer = (void *) buffer;

	free(ptr);
	return (buffer);
}
