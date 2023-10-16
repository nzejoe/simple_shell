#include "shell.h"
/**
 * strconcat - handles strings concatenation
 * @str_to: string to append to
 * @str_from: string to add
 *
 * Return: a pointer to the resulting string
 */
char *strconcat(char *str_to, char *str_from)
{
int i, j;

i = 0;
while (str_to[i] != '\0')
i++;

j = 0;
while (str_from[j] != '\0')
{
str_to[i] = str_from[j];
j++;
i++;
}
str_to[i] = '\0';

return (str_to);
}
