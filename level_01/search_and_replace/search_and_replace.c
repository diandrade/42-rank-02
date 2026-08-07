#include <unistd.h>

void	search_and_replace(char *str, char search_c, char replace_c)
{
	while (*str)
	{
		if (*str == search_c)
			*str = replace_c;
		write(1, &*str++, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 2);
}