#include "holberton.h"
/**
 * get_format - fygh
 * @format: ghjk
 * @args: gjhk
 * Return: char
 */

char *get_format(const char format, va_list args)
{
	int j;
	char operator;
	char *s;
	sp formato[] = {/* sp: Search parameter*/
		{'c', sp_char },
		{'%', sp_percentsign},
		{'s', sp_string },
		/**
		*,
			{'b', convert_binary },
			{'d', sp_decimal },
			{'i', sp_integer},
			{'u', sp_unsigned },
			{'o', sp_octal },
			{'x', sp_hexi },
			{'p', sp_address },
			{'r', sp_reverse},
		  */
		{'\0', NULL}
		};
	operator = format;
	for (j = 0; formato[j].form != '\0'; j++)
	{
		if (formato[j].form == operator)
		{
			s = (formato[j].op(args));
			return (s);
		}
	}
	return (0);
}
