#include "shell.h"

/**
 * get_signal - handles signals when a user type ctrl c
 * @signal: signal number from promt
 * Return: nothing
 */
void get_signal(int signal)
{
	char *prompt = "\n$ ";

	(void)signal;
	write(1, prompt, get_strlen(prompt));
	fflush(stdout);
}

