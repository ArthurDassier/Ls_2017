/*
** EPITECH PROJECT, 2017
** fonctions1.c
** File description:
** blablabla
*/

#include "my.h"

void print_my(char **str, char *argv[], int nb)
{
	for (int u = 0; u != nb; u++)
		my_printf("%s\n", str[u]);
	//my_printf("my_ls\n");
}

int base_ls(int argc, char **argv)
{
	DIR*	rep = NULL;
	struct stat	sb;
	struct dirent*	read_fold = NULL;
	char	*str[0];
	int	i = 0;

	if (argc != 1)
		rep = opendir(argv[1]);
	else
		rep = opendir(".");
	read_fold = readdir(rep);
	while ((read_fold = readdir(rep)) != NULL) {
		if (read_fold->d_name[0] != '.') {
			str[i] = read_fold->d_name;
			i++;
		}
	}
	print_my(str, argv, i);
	return(0);
}

int case_l(int argc, char **argv)
{

}
