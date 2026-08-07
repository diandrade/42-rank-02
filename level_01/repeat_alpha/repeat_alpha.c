#include <unistd.h>

int	find_index(char c)
{
	int	index;

	index = 0;
	if (c >= 'a' && c <= 'z')
	{
		while (c-- >= 'a')
			index++;
		return (index);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		while (c-- >= 'A')
			index++;
		return (index);
	}
    return (1);
}

void	print_c(char c)
{
	int	i;
	int	index;

	i = 0;
	index = find_index(c);
	while (i++ < index)
		write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			print_c(*argv[1]++);
	}
	write(1, "\n", 2);
}
