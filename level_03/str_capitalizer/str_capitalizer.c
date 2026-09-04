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

void	str_capitalizer(char *s)
{
	int	i;

	i = 0;
	if (is_lower(s[i]))
		s[i++] -= 32;
	while (s[i])
	{
		if (is_upper(s[i]))
			s[i] += 32;
		if (is_lower(s[i]) && is_blank(s[i - 1]))
			s[i] -= 32;
		i++;
	}
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
			str_capitalizer(argv[i++]);
			if (i != argc)
				write(1, "\n", 2);
		}
	}
	write(1, "\n", 2);
}