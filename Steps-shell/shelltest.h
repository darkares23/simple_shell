#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
char **split_str(char *str, const char *delim);
 int _fork(char **temp_split);

char *_strcpy(char *dest, char *src);


#endif
