#include "main.h"

/**
 * puts_s - his prints strings
 * @c: character to string
 * Return: number of byte
 */

int puts_s(char *c)
{
	int its = 0;

	if (c)
	{
		for (its = 0; c[its] != '\0'; its++)
		{
			_addchar(c[its]);
		}
	}
	return (its);
}
