#include "holberton.h"
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
/**
 * _printf - Prints anything
 * @format: is a character string.
 * Return: # of character printed.
 */
int _printf(const char *format, ...)
{
	int i;
	int j;
	char *str;
	char buf[1024];

	va_list args;

	if (format == NULL)
	{
		return (0);
	}
	va_start(args, format);

	for (j = 0, i = 0; format[i]; i++, j++)
	{
		if (format[i] != '%')
		{
			buf[j] = format[i];
		}
		else
		{
			if (format[i + 1] == '\0')
			{
				return (0);
			}

			str = get_format(format[++i], args);
			if (str != NULL)
			{
				_strcpy(buf + j, str);
				j += _strlen(str) - 1;
				if (str == '\0')
				{
					j++;
				}
			}

		}
	}
	buf[j] = '\0';
	va_end(args);
	write(1, buf, j);
	return (j);
}
/**
 * *_strcpy - copies string pointed to by src
 * @dest: character pointer
 * @src: character source
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: character
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}