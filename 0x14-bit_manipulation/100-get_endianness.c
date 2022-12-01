<<<<<<< Updated upstream
#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
=======
#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 * Prototype: int get_endianness(void).
 * Return: 1, if architecture is little endian, 0 in case of big endian.
>>>>>>> Stashed changes
 */
int get_endianness(void)
{
	unsigned int x = 1;
<<<<<<< Updated upstream

	/* honestly idk, check: https://stackoverflow.com/questions/12791864 */
	return ((int) (((char *)&x)[0]));
=======
	char *c = (char *) &x;

	return ((int)*c);
>>>>>>> Stashed changes
}
