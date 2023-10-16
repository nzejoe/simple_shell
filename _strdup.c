#include "shell.h"

/**
 * _strdup - handles string duplicating
 * @str: string to be duplicated
 * Return: string
 */
char *_strdup(const char *str)
{
	size_t length = get_strlen(str) + 1;
	char *new_string = (char *)malloc(length);
	size_t i = 0;

	if (new_string == NULL)
		return (NULL);

	for (; i < length; i++)
		new_string[i] = str[i];

	return (new_string);
}

