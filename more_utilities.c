#include "shell.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
  * _puts - prints a string
  * @str: the string to print
  *
  * return: nothing to returns
  */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}

/**
  * _strncmp - compares at most the first n bytes of str1 and str2
  * @s1: the first string
  * @s2: the second string
  * @len: the limit bytes of comparison
  *
  * return: int value
  */

int _strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned int pos = 0;
	int diff = 0;

	while (pos < len)
	{
		if (s1[pos] == s2[pos])
		{
			pos++;
			continue;
		}
		else
		{
			diff = s1[pos] - s2[pos];
			break;
		}

		pos++;
	}

	return (diff);
}

/**
 * _realloc - resize the ptr that previously allocated
 * @ptr: the pointer previously allocated
 * @old_size: the old size of the pointer
 * @new_size: the new size of the pointer
 *
 * return a new pointer to the memory block allocated with the new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new size)
{
	char *nptr;
	unsigned int i;

	if  (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL)
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
	 	return (NULL);

	for (i = 0; < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (nptr);
}
