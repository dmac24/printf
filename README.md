# PRINTF

## Description
The objective of this project is create an simple exact replica of the printf function found in the C programming language. If successfully compiled and executed, the function should return the number of characters printed.

##Prototype
int _printf(const char *format, ...)

## File Usage

Files|Description
--|--
[_printf.c](._printf.c) | Printf Function
[buffer.c](._putchar.c)| Write Function
[main.h](.holberton.h)| Header Principal
[README.md](.README.md)| Description project
[man_3_printf](.man_3_printf)| Manual page

## Compilation
```
	gcc -g -Wall -Werror --pedantic -std=gnu89 <...files> -o <output-file>
	./<output-file>
```

## Testing the Program
Print with the regular standard of printf:
```
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    _printf("Unknown:[%r]\n")
    return (0);
}
```
```
$ ./printf
Let's try to printf a simple sentence.
Length:[39, 39]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
String:[I am a string !]
Address:[0x7ffe637541f0]
Percent:[%]
Len:[12]
Unknown:[%r]
```

## Usage

To use _printf_ function compile all .c files in the repository and inlude the header main.h with any main funtion.

## Bugs

None registered so far

### Contributors

* [@grisalesangela](https://github.com/grisalesangela)
* [@dmac24](https://github.com/dmac24)
