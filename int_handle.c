#include "main.h"

int octalPrint(int a)
{
	int count = 0;
	int num;
	int octal;

	if (a == 0)
	{
		put_char('0');
		count++;

		return (count);
	}

	num = a / 8;
	if (num != 0)
		count = octalPrint(num);
	octal = a % 8 + 48;
	put_char(octal);

	return (count + 1);
}

int hexLow(long int num)
{
	int counter = 0;
	long int n;
	long int hex;

	if (num < 0)
	{
		put_char('-');
		counter++;
		num = -(num);
	}

	n = num / 16;
	if (n != 0)
		counter += hexLow(n);

	hex = num % 16;
	if (hex < 10)
		put_char(hex + '0');
	else
		put_char(hex - 10 + 'a');

	counter++;
	return (counter);
}

int hexUpper(long int num)
{
	int counter;
	long int n, hex;

	if (num < 0)
	{
		put_char('-');
		counter++;
		num = -num;
	}
	n = num / 16;
	if (n != 0)
		counter += hexUpper(n);

	hex = num % 16;
	if (hex < 10)
		put_char(hex + '0');
	else
		put_char((hex - 10) + 65);

	counter++;
	return (counter);
}

int extInt(unsigned int num)
{
	int count = 0;
	unsigned int new;
	unsigned int ascii;

	if (num == 0)
	{
		put_char('0');
		count++;
		return (count);
	}
	new = num / 10;
	if (new != 0)
		count = extInt(new);
	ascii = (num % 10) + 48;

	put_char(ascii);
	return (count + 1);
}
