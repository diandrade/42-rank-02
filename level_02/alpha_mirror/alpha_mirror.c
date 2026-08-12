#include <unistd.h>

void	alpha_mirror(char *arg)
{
	char	c;

	while ((c = *arg++))
	{
		if (c >= 'A' && c <= 'Z')
		{
			if (c <= 'M')
				c = 'Z' - (c - 'A');
			else
				c = 'A' + ('Z' - c);
		}
		else if (c >= 'a' && c <= 'z')
		{
			if (c <= 'm')
				c = 'z' - (c - 'a');
			else
				c = 'a' + ('z' - c);
		}
		write(1, &c, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 2);
}