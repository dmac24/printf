#include "main.h"
#define HEX_SYMBOLS ("0123456789abcdef")
#define HEX_BASE (16)

/**
 * hex_symbol - get symbol that representet the number spesific in hexa
 * @upper: 1 if number is in uppercase else if bumber is 0 lowercase
 * @index: number to parse hex
 * Return: lengh of expansion
 */

char hex_symbol(int upper, int index)
{
	int current_simbol = HEX_SYMBOLS[index];

	if (upper && index > 9)
		current_simbol -= 32;
	return (current_simbol);
}

/**
 * print_x - Print a number to hex
 * @a: variadic argumants
 * @buffer: buffer to acummulate output
 * @buffer_size: actual items in the buffer
 * Return: lengh of expansion
 */

int print_x(va_list a, char *buffer, int *buffer_size)

{
	unsigned int number = 0;

	if (a == NULL)
		return (-1);

	number = va_arg(a, unsigned int);
	return (int2binary(number, 0, buffer, buffer_size));
}

/**
 * print_X - Print a number to hex
 * @a: variadic argumants
 * @buffer: buffer to acummulate output
 * @buffer_size: actual items in the buffer
 * Return: lengh of expansion
 */

int print_X(va_list a, char *buffer, int *buffer_size)

{
	unsigned int number = 0;

	if (a == NULL)
		return (-1);

	number = va_arg(a, unsigned int);

	return (int2binary(number, 1, buffer, buffer_size));
}

/**
 * int2binary - int to hexa
 * @number: integer
 * @toUpper: bool
 * @buffer: buffer to print
 * @buffer_size: actual items in the buffer
 * Return: lengh of expansion
 */
int int2binary(
	unsigned int number, int toUpper, char *buffer, int *buffer_size)
{
	int nextNumber = number / HEX_BASE;
	int hexNumber = 0;
	int counter = 1;

	hexNumber = number % HEX_BASE;
	if (nextNumber == 0)
	{
		_putchar(hex_symbol(toUpper, hexNumber), buffer, buffer_size);
		return (counter);
	}

	counter = int2binary(nextNumber, toUpper, buffer, buffer_size);
	_putchar(hex_symbol(toUpper, hexNumber), buffer, buffer_size);
	return (1 + counter);
}
