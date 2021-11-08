#include "main.h"

/**
 * print_i - Print a integer
 * @a: arguments
 * @buffer: buffer to acummulate output
 * @buffer_size: actual items in the buffer
 * Return: lengh of expansion
 */
int print_i(va_list a, char *buffer, int *buffer_size)
{
  unsigned int num;

  if (a == NULL)
    return (-1);

  num = va_arg(a, int);
  return (print_number(num, buffer, buffer_size));
}
/**
 * print_d - Print a integer
 * @a: arguments
 * @buffer: buffer to acummulate output
 * @buffer_size: actual items in the buffer
 * Return: lengh of expansion
 */
int print_d(va_list a, char *buffer, int *buffer_size)
{
  unsigned int num;

  if (a == NULL)
    return (-1);

  num = va_arg(a, int);
  return (print_number(num, buffer, buffer_size));
}
