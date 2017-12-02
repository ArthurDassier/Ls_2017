/*
** EPITECH PROJECT, 2017
** hypl.c
** File description:
** blablabla
*/

#include "my.h"

void pr_right(char *str, struct stat sb, struct timespec st_ctim,
	struct dirent* read_fold)
{
	uid_t	uid = getuid();
	struct passwd	*j = getpwuid(uid);
	int	size = sb.st_size;
	char	*date = ctime(&sb.st_ctime);
	struct group	*gname = getpwuid(uid);
	stat(str, &sb);

	print_hyp_l(sb);
	my_printf("%d ", sb.st_nlink);
	my_printf("%s ", j->pw_name);
	my_printf("%s ", gname->gr_name);
	my_printf("%d ", size);
	for(int i = 4; i != 16; i++)
		my_putchar(date[i]);
	my_putchar(' ');
	print_my(&str, str, 1);
}

void print_r(char **str, char *argv, int nb)
{
	for (int u = 0; u <= nb; nb--)
		my_printf("%s\n", str[nb]);
}

int base_r(int argc, char **argv, int x)
{
	DIR*	rep = opendir(".");
	struct stat	sb;
	struct dirent*	read_fold;
	char	*str[0];
	int	i = 0;

	while ((read_fold = readdir(rep)) != NULL) {
		if (read_fold->d_name[0] != '.') {
			str[i] = read_fold->d_name;
			i++;
		}
	}
	print_r(str, argv[x], i - 1);
	return(0);
}

int base_d(int argc, char **argv, int x)
{
	if (argc != 2)
		for (int i = 2; i != argc; i++)
			my_printf("%s\n", argv[i]);
	else
		my_printf(".\n");
}

char *thecat(struct dirent* rd_fld, int argc, char **argv, int x)
{
	char	*str;

	if (argc > 2)
		str = my_strcat(argv[x + 1], rd_fld->d_name);
	else
		str = rd_fld->d_name;
	return(str);
}
