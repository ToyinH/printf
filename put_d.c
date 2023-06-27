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
	int new_num;
	int ascii;
	unsigned int n;
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
		n = (unsigned int)-num;
	}
	if (num == INT_MIN)
	{
		counter += put_d(n / 10);
		put_char((n % 10) + '0');
		counter++;
		return (counter);
	
	}
	new_num = num / 10;
	if (new_num != 0)
		counter = put_d(new_num);
	ascii = (num % 10) + 48;

	put_char(ascii);

	return (counter + 1);
}
