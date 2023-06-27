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
	static char buffer[BUFFER_SIZE];
	static int buffer_index = 0;
	int r_val = 0;
	int r_val1 = 0;

	if (buffer_index < BUFFER_SIZE)
	{
		return (write(1, &a, 1));
	}
	else if (buffer_index >= BUFFER_SIZE)
	{
		r_val1 = write(1, buffer, buffer_index);
		buffer_index = 0;
		buffer[buffer_index++] = a;
		r_val = (r_val + 1) + r_val1;
		write(1, &a, buffer_index);
	}
	return (r_val);
}
