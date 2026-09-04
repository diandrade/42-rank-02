#include <unistd.h>

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_blank(char c)
{
	if (c == ' ' || c >= 7 && c <= 13)
		return (1);
	return (0);
}

void	rstr_capitalizer(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (is_upper(s[i]))
			s[i] += 32;
		if (is_blank(s[i]) && is_lower(s[i - 1]))
			s[i - 1] -= 32;
		i++;
	}
	if (is_lower(s[i - 1]))
		s[i - 1] -= 32;
	while (*s)
		write(1, &*s++, 1);
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
		{
			rstr_capitalizer(argv[i++]);
			if (i != argc)
				write(1, "\n", 2);
		}
	}
	write(1, "\n", 2);
}