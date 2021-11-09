#include "main.h"
/* You can adding in below the types that we having of */
/* each handler in current _printf */
#define TYPES "dcisbRrxX"
/**
 * format_is_correct  - this function validate if format is correct
 * @format: char %
 * @type: format specifier
 * Return: 0 or
 */
int format_is_correct(char format, char type)
{
	if (format != '%')
		return (0);
	return (format_is_correct_spaces(type));
}

/**
 * format_is_correct_spaces - validate formate in space case
 * @type: char
 * Return: int
 */
int format_is_correct_spaces(char type)
{

	int i;

	for (i = 0; TYPES[i] != '\0'; i++)
	{
		if (type == TYPES[i])
			break;
	}
	return (TYPES[i] != '\0');
}
