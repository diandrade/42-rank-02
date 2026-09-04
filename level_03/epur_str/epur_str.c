#include <unistd.h>

int	is_blank(char c)
{
	if (c == ' ' || c >= 7 && c <= 13)
		return (1);
	return (0);
}

void	epur_str(char *str)
{
	while (is_blank(*str))
		*str++;
	while (*str)
	{
		while (!is_blank(*str) && *str)
			write(1, &*str++, 1);
		if (is_blank(*str))
			write(1, &*str, 1);
		while (is_blank(*str))
			*str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 2);
}
