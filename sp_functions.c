#include "holberton.h"
/**
* sp_string - Returns a string
* @args: list containing the string
* Return: str
*/
char *sp_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = NULL;
	}
	return (str);
}

/**
 * sp_percentsign - returns %
 *  @args: list containing the characters
 *  Return: str
 */
char *sp_percentsign(va_list args __attribute__((unused)))
{
	char *str = "%";

	return (str);
}

/**
 * sp_char - returns a single character as a string
 * @args:  list containing the modify character
 * Return: str
 */
char *sp_char(va_list args)
{
	char a = va_arg(args, int);
	char *str = malloc(sizeof(char) * 1024);

	if (str == NULL)
	{
		free(str);
		return (0);
	}
	str[0] = a;
	free(str);
	return (str);
}
