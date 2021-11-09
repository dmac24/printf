#include "main.h"

/**
 * print_c - Print a character
 * @a: arguments
 * @buffer: buffer to acummulate output
 * @buffer_size: actual items in the buffer
 * Return: lengh of expansion
 */
int print_c(va_list a, char *buffer, int *buffer_size)
{
	if (a == NULL)
		return (-1);

	_putchar(va_arg(a, int), buffer, buffer_size);
	return (1);
}
