# Printf

## What it's about:
We're creating our own prinft function, it's part of the Holberton School curriculum.
---
## Autorized fuctions and macros:
* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
---
## Content
*Function Description*
----
- _strlen
 We use this function to know the lenght of the string and assigned it to a variable int. line (42, printf.c)
----
- structure search format[]
We create a structure in the get-format.c file for listing our functions that can be call in the printf funtion.
----
- strcpy
We use this function to copy the string to the buffer in the specific lines(41, 52. printf.c).
-----

-----
##
*Content Description*

| 	File Name   |				 Summary content				   |
|  		:---:   | 		     		:---: 	 					   |
|`get-format.c` |Brings the corresponding format to printf function|
|`holberton.h`  |List prototypes and structure					   |
|`sp_function.c`|Functions formats c, s, %  					   |
|`printf.c`	    |Contains printf function						   |
|`sp_number`	|Function format d and i						   |
|`man_3_printf`	|manual for the printf function					   |

------
## Example 

```C
#include "holberton.h"
/**
 * main - Entry point
 * @s: character
 * Return: 0 Success
 */
int main(void)
{
        char *s = "is ";
		_printf("This ");
        _printf("%s", s);
        _printf("The function ");
		_printf("%c", 'p');
		_printf("rintf ");
		_printf("for julianamonr0%d ", 3);
		_printf("and Camilo%i\n", 6);
		
        return (0);
}
```
*output*

`This is The function printf for julianamonr03 and Camilo6`

## Authors
* **Juliana Monroy Pérez** - [julianamonr03](https://github.com/julianamonr03)
* **Julian Camilo Torres** - [Camilo6](https://github.com/Camilo6)