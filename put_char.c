#include "main.h"
#include <unistd.h>
/**
 * put_char - function to print a character to stdout
 * @a: the character to print
 *
 * Return: return
 */
int put_char(char a)
{
	return (write(1, &a, 1));
}
