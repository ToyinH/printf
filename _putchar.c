#include <unistd.h>
/**
 * _putchar - function to print a character to stdout
 * @a: the character to print
 *
 * Return: return 
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
