/**
 * file: 1-memcpy.c
 * Auth: Abenezer
 */

#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
