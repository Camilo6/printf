#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct search - search for the character that
 * should be replaced in the buffer
 * @form: is a string
 * @op: pointer that point a fucntion of arguments
 */

typedef struct search
{
	char form;
	char *(*op)(va_list args);
} sp;

char *get_format(const char format, va_list args);
char *sp_char(va_list args);
int _printf(const char *format, ...);
char *sp_percentsign(va_list args);
int _put_char(char c);
char *sp_string(va_list args);

#endif /*PRINTF*/
