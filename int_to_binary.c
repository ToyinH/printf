#include "main.h"
/**
 * int_to_binary - function that converts unsigned int to binary
 * @n: number to convert to binary
 *
 * Return: return number of character printed
 */
int int_to_binary(unsigned int n)
{
	int i = 0;
	int j;
	unsigned int binary[32];

	if (n == 0)
	{
		put_char(0);
		return (1);
	}
	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		put_char(binary[j] + '0');
	}
	return (i);
}
