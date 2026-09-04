#include <unistd.h>

int	is_blank(char c)
{
	if (c == ' ' || c >= 7 && c <= 13)
		return (1);
	return (0);
}

void	expand_str(char *s)
{
	while (is_blank(*s))
		*s++;
	while (*s)
	{
		while (!is_blank(*s) && *s)
			write(1, &*s++, 1);
		if (is_blank(*s))
		{
			write(1, &*s, 1);
			write(1, &*s, 1);
			write(1, &*s, 1);
		}
		while (is_blank(*s))
			*s++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 2);
}