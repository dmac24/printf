#include "main.h"

/**
 * get_function - select and run function by type
 * @type: string
 * @i: int
 * @count: int
 * @lista: lista
 * @buffer: buffer to acummulate output
 * @buffer_size: actual items in the buffer
 * Return: integer
 */
int get_function(char type, int *i, int *count, va_list lista, char *buffer,
		 int *buffer_size)
{
	int j = 0, result = 0;
	print_t print_type[] = {
		{'x', print_x},
		{'X', print_X},
		{'c', print_c},
		{'s', print_s},
		{'i', print_i},
		{'d', print_d},
		{'b', print_binary},
		{'R', rot13},
		{'r', rev_string},
		{'\0', NULL}};

	for (j = 0; print_type[j].type_format != '\0'; j++)
	{
		if (type == print_type[j].type_format)
		{
			result = print_type[j].f(lista, buffer, buffer_size);
			if (result == -1)
				return (-1);
			*count += result;
			*i += 1;
			break;
		}
	}
	return (0);
}

/**
 * _is_alpha -  manage case with % and ' ' (spaces)
 *@c: algo
 * Return: int
 */
int _is_alpha(char c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}
