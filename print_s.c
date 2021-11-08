#include "main.h"

/**
 * print_s - Print a char*
 * @a: variadic argumants
 * @buffer: buffer to acummulate output
 * @buffer_size: actual items in the buffer
 * Return: lengh of expansion
 */
int print_s(va_list a, char *buffer, int *buffer_size)
{
  int i;
  char *string;

  if (a == NULL)
    return (-1);

  string = va_arg(a, char *);

  if (string == NULL)
    {
      string = "(null)";
    }
  for (i = 0; string[i] != '\0'; i++)
    {
      _putchar(string[i], buffer, buffer_size);
    }
  return (i);
}
