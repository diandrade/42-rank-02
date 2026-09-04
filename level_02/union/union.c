#include <unistd.h>

int	is_printed(char *s, size_t index, char c)
{
	while (index-- > 0)
	{
		if (c == s[index])
			return (1);
	}
	return (0);
}

void	check_duplicates_and_print(char *s1, char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		if (!is_printed(s1, i, s1[i]))
			write(1, &s1[i], 1);
		i++;
	}

	j = 0;
	while (s2[j])
	{
		if (!is_printed(s1, i, s2[j]) && !is_printed(s2, j, s2[j]))
			write(1, &s2[j], 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		check_duplicates_and_print(argv[1], argv[2]);
	write(1, "\n", 2);
}