#include "holberton.h"
int _strlen(char *s);
/**
 * sp_rot13 - translates a string to rot13
 * @args: string to translate
 * Return: translated string
 */
char *sp_rot13(va_list args)
{
	int cont, cont2, conts;
	char *str = va_arg(args, char *);
	char abc[60] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[60] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *buf;

	if (str == NULL)
	{

		return (NULL);
	}
	conts = _strlen(str);
	buf = malloc(sizeof(char) * conts + 1);
	if (buf == NULL)
	{
		return (NULL);
	}
	for (cont = 0; str[cont] != '\0'; cont++)
	{
		for (cont2 = 0; abc[cont2] != '\0'; cont2++)
			if (str[cont] == abc[cont2])
			{
				buf[cont] = rot[cont2];
				break;
			}
	}
	return (buf);
}
