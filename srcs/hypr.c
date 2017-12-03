/*
** EPITECH PROJECT, 2017
** hypr.c
** File description:
** blabla
*/

#include "my.h"

int base_rr(int argc, char **argv, int x)
{
	DIR*	rep = NULL;
	struct stat	sb;
	struct dirent*	read_fold;
	char	*str[200];
	int	i = 0;

	if (argc != 2)
		rep = opendir(argv[x]);
	else
		rep = opendir(".");
	while ((read_fold = readdir(rep)) != NULL) {
		stat(read_fold->d_name, &sb);
		if (read_fold->d_name[0] != '.' && S_ISDIR(sb.st_mode)) {
			my_printf("./%s:\n", read_fold->d_name);
			str[i] = read_fold->d_name;
			print_rr(2, str, i);
			my_putchar('\n');
			i++;
		}
	}
	my_printf(".:\n");
	base_ls(1, argv, 1);
	return(0);
}

char type(struct stat sb)
{
	char	type;

	if (S_ISREG(sb.st_mode))
		type = '-';
	if (S_ISDIR(sb.st_mode))
		type = 'd';
	if (S_ISCHR(sb.st_mode))
		type = 'c';
	if (S_ISLNK(sb.st_mode))
		type = 'l';
	if(S_ISSOCK(sb.st_mode))
		type = 's';
	if(S_ISBLK(sb.st_mode))
		type = 'b';
	return(type);
}

void print_rr(int argc, char **argv, int x)
{
	DIR*	rep = NULL;
 	struct stat	sb;
 	struct dirent*	read_fold;
 	char	*str[200];
 	int	i = 0;

 	rep = opendir(argv[x]);
 	while ((read_fold = readdir(rep)) != NULL) {
 		if (read_fold->d_name[0] != '.') {
 			str[i] = read_fold->d_name;
 			i++;
 		}
 	}
 	print_my(str, argv[x], i);
}
