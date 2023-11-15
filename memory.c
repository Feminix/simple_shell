#include "shell.h"

/**
 * bfree - liberates a pointer and sets its address to NULL
 * @pointer: the pointer's address to liberate
 *
 * Return: 1 if liberated, 0 otherwise.
 */
int bfree(void **pointer)
{
	if (pointer && *pointer)
	{
		liberate(*pointer);
		*pointer = NULL;
		return (1);
	}
	return (0);
}
