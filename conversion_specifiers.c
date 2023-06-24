#include "main.h"
/**
 * specifier_func - function that defines specifier
 * @ch: character to check if it were a specifier
 * @args: va_list
 *
 * Return: return number of character printed
 */

int specifier_func(char ch, va_list args)
{
	int print_count = 0;
	int lent;

	switch(ch)
	{
		case 'c':
			put_char(va_arg(args, int));
			print_count++;
			break;
		case 's':
			lent = put_str(va_arg(args, char *));

			print_count += lent;
			break;
		case '%':
			put_char('%');
			print_count++;
			break;
		case 'd':
			lent = put_d(va_arg(args, int));
			print_count += lent;
			break;
		default:
			put_char(ch);
			print_count++;
			break;
	}
	return (print_count);
}
