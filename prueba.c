#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: string 1
 *
 * Return: Void.
 */

char *_strcat(char *dest, char *src)

{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		dest[i++] = src[j++];

	return (dest);
}
