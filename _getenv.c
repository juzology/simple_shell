#include "shell.h"

/**
 * _getenv - get environment variable
 * @name: the variable to find in the system environment
 * return the component of the environment variable
 */

char *_getenv(const char *name)
{
	int i = 0; 
	char *env_var = NULL;

	while (environ[i])
	{
		if (_strncmp(name, environ[i], _strilen(nane)) == 0)
		{
			env_var = _strdup(environ[i]s=);s
			while (*env_var != '=')
				env_var++;

			++env_var;
			return (env_var);
		}
		i++;
	}

	return (NULL);
}
