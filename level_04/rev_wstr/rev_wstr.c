#include <unistd.h>

int	is_blank(char c)
{
	if (c == ' ' || c >= 9 && c <= 13)
		return (1);
	return (0);
}

void	rev_wstr(char *s)
{
	int	i;
	int	str_start;

	i = 0;
	while (s[i])
		i++;
	while (i--)
	{
		if (is_blank(s[i]) && !is_blank(s[i + 1]))
		{
			i++;
			str_start = i;
			while (!is_blank(s[i]) && s[i])
				write(1, &s[i++], 1);
			if (i != 0)
                write(1, " ", 1);
			i = str_start - 2;
		}
	}
	while (!is_blank(s[i]))
		write(1, &s[i++], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 2);
}