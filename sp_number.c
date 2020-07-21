#include "holberton.h"
/**
* sp_number - print buf number
* @args: arguments
* Return: Buffer
*/
char *sp_number(va_list args)
{
	int n = va_arg(args, int);
	char *x;
	char buf[20];
	unsigned int i, j = 1, nm = 0;

	if (n < 0)
	{
		n = -n;
		buf[0] = '-';
		nm++;
	}
	if (n == 0)
		buf[0] = ('0');

	else
	{
		i = n;
		while (i > 9)
		{
			i = i / 10;
			j = j * 10;
		}
		while (j >= 1)
		{
			buf[nm] = ((n / j) + '0');
			n = n % j;
			j = j / 10;
			nm++;
		}
	}
	x = buf;
	return (x);
}
