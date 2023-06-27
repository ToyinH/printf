#include "main.h"
#include <limits.h>
/**
 * put_d - prints numbers
 * @num: an argument
 *
 * Return: the number of times written
 */

int put_d(int num)
{
	int counter = 0;
	unsigned int abs;
	int ascii;

	if (num == 0)
	{
		put_char('0');
		counter++;
		return (counter);
	}
	if (num < 0)
	{
		put_char('-');
		counter++;
		num = abs = num * -1;
	}
	
	if (num == INT_MIN)
	{
		counter += put_d(abs / 10);
		put_char((abs % 10) + '0');
		counter++;
		return (counter);
	
	}
	
	if (num / 10)
		counter += put_d(num / 10);
	ascii = (num % 10) + 48;

	put_char(ascii);
	
	return (counter + 1);
}
