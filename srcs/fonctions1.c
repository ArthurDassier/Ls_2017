/*
** EPITECH PROJECT, 2017
** fonctions1.c
** File description:
** blablabla
*/

#include "my.h"

void print_my(char **str, char *argv, int nb)
{
	for (int u = 0; u < nb; u++)
		my_printf("%s\n", str[u]);
}

int base_ls(int argc, char *argv)
{
	DIR*	rep = NULL;
	struct stat	sb;
	struct dirent*	read_fold;
	char	*str[0];
	int	i = 0;

	if (argc != 1)
		rep = opendir(argv);
	else
		rep = opendir(".");
	while ((read_fold = readdir(rep)) != NULL) {
		if (read_fold->d_name[0] != '.') {
			str[i] = read_fold->d_name;
			i++;
		}
	}
	print_my(str, argv, i);
	return(0);
}

int mult_path(int (*PointeursurFonction[2])(int argc, char *argv),
int argc, char *argv, int j)
{
	my_printf("%s:\n", argv);
	PointeursurFonction[0](argc, argv);
	if (j != argc - 1)
		my_putchar('\n');
	return(0);
}
