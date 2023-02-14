#include "shell.h"

/**
 * _print_env - prints the environment built-in
 * nothing to return
 */

void _print_env(void)
{
	int = 0, j = 0; 

	while (environ[i])
	{
		i = 0;
		while (environ[i][j])
		{
			_putchar(environ[i][j]);
			j++;
		}

		if(j != 0)
			_putchar("\n");
		i++;
	}
}
