#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

void	snake_to_camel(char *s)
{
	size_t	i;

	i = 0;
	if (is_upper(s[i]))
		ft_putchar(s[i++] + 32);
	while (s[i])
	{
		while (s[i] == '_')
			i++;
		if (s[i - 1] == '_' && is_lower(s[i]))
			ft_putchar(s[i] - 32);
		else
			ft_putchar(s[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 2);
}