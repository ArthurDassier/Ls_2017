/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** strcmp
*/

int my_strlen(char const *str);

int my_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (my_strlen(s1) - i);
}
