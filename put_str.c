#include "main.h"

/**
 * put_str - function to print a string
 * @str: the string to be printed
 *
 * Return: return the number of character printed
 */

int put_str(char *str)
{
	int r_val = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		put_char(str[i]);
		r_val++;
		i++;
	}
	return (r_val);
}

