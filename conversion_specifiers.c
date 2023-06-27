#include "main.h"
/**
 * specifier_func - function that defines specifier
 * @ch: character to check if it were a specifier
 * @args: va_list
 * Return: return number of character printed
 */

int specifier_func(char ch, va_list args)
{
	int print_count = 0;
	int lent;
	char *str;

	switch (ch)
	{
		case 'c':
			put_char(va_arg(args, int));
			print_count++;
			break;
		case 's':
			str = (va_arg(args, char *));
			if (str == NULL)
				str = "(null)";
			lent = put_str(str);
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
		case 'i':
			lent = put_i(va_arg(args, int));
			print_count += lent;
			break;
		case 'b':
			lent = int_to_binary(va_arg(args, int));
			print_count += lent;
			break;
		case 'o':
			lent = octalPrint(va_arg(args, int));
			print_count += lent;
			break;
		case 'u':
			lent = extInt(va_arg(args, unsigned int));
			print_count += lent;
			break;
		case 'x':
			lent = hexLow(va_arg(args, long int));
			print_count = lent;
			break;
		case 'X':
			lent = hexUpper(va_arg(args, long int));
			print_count = lent;
			break;
		default:
			put_char(ch);
			print_count++;
			break;
	}
	return (print_count);
}
