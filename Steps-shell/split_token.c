#include "shelltest.h"

/**
 *_strcpy - Function to copy
 *@dest: edited variable
 *@src: edited variable
 *Return: always 0
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 *split_str - Function to copy
 *@str: edited variable
 *@delim: edited variable
 *Return: always 0
*/
char **split_str(char *str, const char *delim)
{
	int len = 0, wordCount = 0, i =0;
	char **token_list = NULL;
	char *token = strtok(str, delim);
	
	/*Words count*/
	while (str[len])
	{
		printf("list is %s\n", token);
		while (str[len] == delim[0] && str[len])
			len++;
		while (str[len] != delim[0] && str[len])
			len++;
		wordCount++;
		if (str[len] == '\n')
			str[len] = '\0';
	}
	printf("list is %s\n", token);


	token_list = malloc(sizeof(char *) * wordCount);
	if (wordCount == 0)
	{
		perror ("Error");
		free(token_list);
	}
	if (token_list == NULL)
	{
		perror ("Error");
		free(token_list);
	}

	while (token)
	{
		token_list[i] = token;
		printf("list 1 %s\n", token);
		i++;
		token = strtok(NULL, delim);
		printf("list2 %s\n", token);
	}
	free(token);
	return (token_list);
}
