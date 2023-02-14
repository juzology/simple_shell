#include "shell.h"

/**
 * remove_new_line - removes new line character from string 
 * @str: the string
 *
 * return the string without the new line character
 */

char *remove_new_line(char *str)
{
	int i = 0;

	while (str[i])
	{ 
		if (str[i] == '\n')
			str[i] = '\0';
		i++;
	}

	return (str);
}
