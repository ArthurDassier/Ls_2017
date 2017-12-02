/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
**
*/

#include <stdlib.h>

int my_strlen (char const *str);

char *my_strcat(char *dest, char const *src)
{
	char *plt = malloc(sizeof(char) + my_strlen(dest) + my_strlen(src) + 1);
	int	i = 0;
	int	j = 0;
	while (dest[i] != '\0') {
		plt[i] = dest[i];
		i++;
	}
	if (plt[i - 1] != '/') {
		plt[i] = '/';
		i++;
	}
	while (src[j] != '\0') {
		plt[i] = src[j];
		i++;
		j++;
	}
	plt[i] = '\0';
	return (plt);
}
