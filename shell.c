#include "shell.h"

/**
 * frees_get_env
 * @env_path: the environment variable to frees 
 *
 * return nothing
 */

void frees_get_env(char *env_path)
{ 
	int i;

	for (i = 4; i >= 0; i--)
		env_path--;

	free(env_path);
}

/**
 * frees_tokens
 * @tokns
 *
 * return nothing 
 */

void frees_tokens(char **tokns)
{
	char **temp = tokns;

	if (tokns)
	{
		while (*tokns)
			free(*tokns++);

		free(temp);
	}
}
