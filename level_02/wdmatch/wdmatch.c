#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
		write(1, &*s++, 1);
}

void	wdmatch(char *s1, char *s2)
{
	char	*start;

	start = s1;
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
			*s1++;
		else
			*s2++;
	}
	if (*s1 == '\0')
		ft_putstr(start);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 2);
}