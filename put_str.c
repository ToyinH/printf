#include "main.h"

/**
 * put_str - function to print a string
 * @str: the string to be printed
 *
 * Return: return the number of character printed
 */

int put_str(char *str)
{
	static char buffer[BUFFER_SIZE];
	static int buffer_index = 0;
	int r_val = 0;
	int r_val1 = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		r_val1 = 0;
		buffer[buffer_index++] = str[i];
		r_val = (r_val + 1) + r_val1;
		i++;
		if (buffer_index == BUFFER_SIZE)
		{
			r_val1 = write(1, buffer, buffer_index);
			buffer_index = 0;
		}
	}
	write(1, buffer, buffer_index);
	return (r_val);
}

