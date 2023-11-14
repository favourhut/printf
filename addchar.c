#include "main.h"
#include <unistd.h>
/**
 * addchar - this function adds charater to output
 * @c: charatcerinput
 * Return: 1 on success
 */

int addchar(char c)
{
	return write(1, &c, 1);
}
