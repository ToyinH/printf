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
	char *h_null = "(null)";

	if (str == NULL)
	{
		while (h_null[i] != '\0')
		{
			put_char(h_null[i]);
			r_val++;
			i++;
		}
		return (r_val);
	}

	else
	{
		while (str[i] != '\0')
		{
			put_char(str[i]);
			r_val++;
			i++;
		}
	}
	return (r_val);
}

