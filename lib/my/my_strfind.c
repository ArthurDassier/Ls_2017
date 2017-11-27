/*
** EPITECH PROJECT, 2017
** RUSH02
** File description:
** strfind
*/

#include <stdio.h>

int my_strfind(char *str, char c)
{
	int	i = 0;
	int	j = 0;
	
	while(str[i] != '\0') {
		if (str[i] == c) {
			j++;
			i++;
		} else {
			i++;
		}
	}
	return(j);
}
