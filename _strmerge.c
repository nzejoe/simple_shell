#include "shell.h"
/**
 * _strmerge - merges two string together
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @str1: string to copy into
 * @str2: string to be copied
 *
 * Return: final string
 */
int _strmerge(const char *str1, const char *str2)
{
while (*str1 && *str2 && *str1 == *str2)
{
str1++;
str2++;
}

return ((int)(*str1 - *str2));
}
