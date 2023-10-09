#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <dirent.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>

extern char **environ;
int _strmerge(const char *str1, const char *str2);
void get_signal(int signal);
size_t get_strlen(const char *str);
char *_strdup(const char *str);
char *strconcat(char *str_to, char *str_from);
char *_strcpy(char *dest, char *src);
ssize_t _getline(char **line, size_t *len, FILE *stream);

#endif
