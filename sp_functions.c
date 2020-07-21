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
		str = "(null)";
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
	char *x;
	char str[2];

	str[0] = va_arg(args, int);
	str[1] = '\0';
	x = str;
	return (x);
}
