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

int base_ls(int argc, char **argv, int x)
{
	DIR*	rep = NULL;
	struct stat	sb;
	struct dirent*	read_fold;
	char	*str[0];
	int	i = 0;

	if (argc != 1)
		rep = opendir(argv[x]);
	else
		rep = opendir(".");
	while ((read_fold = readdir(rep)) != NULL) {
		if (read_fold->d_name[0] != '.') {
			str[i] = read_fold->d_name;
			i++;
		}
	}
	print_my(str, argv[x], i);
	return(0);
}

int mult_path(int (*tabptr[2])(int argc, char **argv, int x),
int argc, char **argv, int j)
{
	if (argc != 2)
		my_printf("%s:\n", argv[j]);
	tabptr[0](argc, argv, j);
	if (j != argc - 1)
		my_putchar('\n');
	return(0);
}

int hyp_l(int argc, char **argv, int x)
{
	DIR*	rep = opendir(".");;
	struct stat	sb;
	struct timespec	st_ctim;
	uid_t	uid = getuid();
	struct passwd	*j = getpwuid(uid);
	struct dirent*	read_fold;
	int	size;
	char *str[200];
	int	i = 0;
	char	*pd;
	struct group	*gname = getpwuid(uid);

	while ((read_fold = readdir(rep)) != NULL) {
		if (read_fold->d_name[0] != '.') {
		str[i] = read_fold->d_name;
		i++;
		}
	}
	for(int e = 0; e != i; e++) {
		stat(str[e], &sb);
		size = sb.st_size;
		print_hyp_l(sb);
		my_printf("%d ", sb.st_nlink);
		my_printf("%s ", gname->gr_name);
		my_printf("%s ", j->pw_name);
		my_printf("%d ", size);
		pd = ctime(&sb.st_ctime);
		pd[my_strlen(pd) - 1] = '\0';
		my_printf("%s ", pd);
		print_my(&str[e], argv[x], 1);
	}
	return(0);
}

void print_hyp_l(struct stat fileStat)
{
	my_putchar(S_ISDIR(fileStat.st_mode) ? 'd' : '-');
	my_putchar((fileStat.st_mode & S_IRUSR) ? 'r' : '-');
	my_putchar((fileStat.st_mode & S_IWUSR) ? 'w' : '-');
	my_putchar((fileStat.st_mode & S_IXUSR) ? 'x' : '-');
	my_putchar((fileStat.st_mode & S_IRGRP) ? 'r' : '-');
	my_putchar((fileStat.st_mode & S_IWGRP) ? 'w' : '-');
	my_putchar((fileStat.st_mode & S_IXGRP) ? 'x' : '-');
	my_putchar((fileStat.st_mode & S_IROTH) ? 'r' : '-');
	my_putchar((fileStat.st_mode & S_IWOTH) ? 'w' : '-');
	my_putchar((fileStat.st_mode & S_IXOTH) ? 'x' : '-');
	my_putchar(' ');
}
