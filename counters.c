#include "shell.h"

/**
  * count_input - count the words typed by the user
  * @str: the string that containd the word
  *
  * return the number of word found in the string
  */

int count_input(char *str)
{
	int i = 0, cw = 0, state = 0;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			cw++;
		}

		i++;
	}

	return (cw);
}

/**
 *count_delims - count delimiters in a string
 * @str: the string that contains the delimiters
 * @del: the delimiters to find in the string
 *
 * return the numbers of delimiters in the string
 */

int count_delims(char *str, char *del)
{
	int i = 0, j = 0, cw = 0;

	while (del[i])
	{
		j = 0;
		while (str[j])
		{
			if(str[j] == del[i])
				cw++;
			j++;
		}
		i++;
	}

	return (cw);
}
