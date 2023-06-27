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

	if (num < 0)
	{
		put_char('-');
		num = -(num);
		counter++;
	}
	if (num == 0)
	{
		put_char('0');
		counter++;
		return (counter);
	}
	if (num == INT_MIN)
	{
		put_char('2');
		num = 147483648;
		counter++;
	}
	new_num = num / 10;
	if (new_num != 0)
		counter = put_d(new_num);
	ascii = (num % 10) + 48;

	put_char(ascii);

	return (counter + 1);
}
