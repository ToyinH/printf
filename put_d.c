#include "main.h"

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
		return (counter);
	new_num = num / 10;
	ascii = (num % 10) + 48;
	counter = put_d(new_num);
	
	put_char(ascii);

	return (counter + 1);
}
