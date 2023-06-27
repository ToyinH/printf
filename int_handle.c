#include "main.h"

/*
 * octalPrint - function to print decimal as octal
 * @a: number to convert
 *
 * Return: count
 */

int octalPrint(unsigned int a)
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
	if (num !=  0)
		count = octalPrint(num);
	octal = a % 8 + 48;
	put_char(octal);

	return (count + 1);
}
/**
 * hexLow - prints in lowercase hex
 * @num: num to convert to hex
 *
 * Return: counter
 */

int hexLow(unsigned int num)
{
	int counter = 0;
	unsigned int n;
	int hex;

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

/**
 * hexUpper - prints in uppercase hex.
 * @num: numer to convert to hex
 *
 * Return: counter
 */

int hexUpper(unsigned int num)
{
	int counter = 0;
	unsigned int n, hex;

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

/**
 * extInt- handles the %o specifier
 * @num: argument to convert
 *
 * Return: count
 */

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
