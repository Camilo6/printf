#include "holberton.h"
char *sp_number(va_list args);
/**
 * get_format - searches for the format specifier
 * @format: pointer to the format specifier
 * @args: va_list args
 * Return: char
 */

char *get_format(const char format, va_list args)
{
	unsigned int j;
	char operator;
	char *s;
	sp formato[] = {/* sp: Search parameter*/
		{'c', sp_char},
		{'%', sp_percentsign},
		{'s', sp_string},
		{'d', sp_number},
		{'i', sp_number},
		{'\0', NULL}
		};
	operator = format;
	for (j = 0; formato[j].form != '\0'; j++)
	{
		if (formato[j].form == operator)
		{
			s = (formato[j].op(args));
			if (s == NULL)
			{
				return (NULL);
			}
			return (s);
		}
	}
	return (NULL);
}
