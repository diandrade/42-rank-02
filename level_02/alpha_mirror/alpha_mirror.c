#include <unistd.h>

char	mirror(char c, char c_case)
{
	char	first_c;
	char	last_c;
	int		distance;

	if (c_case >= 'U')
	{
		if (c >= 'M')
		{
			last_c = c;
			distance = 'Z' - c;
			first_c = 'A' + distance;
            return first_c;
		}

        if (c <= 'M')
		{
			first_c = c;
            distance = c - 'A';
            last_c = 'Z' - distance;
            return last_c;
		}
	}

    if (c_case >= 'L')
	{
		if (c >= 'm')
		{
			last_c = c;
			distance = 'z' - c;
			first_c = 'a' + distance;
            return first_c;
		}

        if (c <= 'm')
		{
			first_c = c;
            distance = c - 'a';
            last_c = 'z' - distance;
            return last_c;
		}
	}
}

void	alpha_mirror(char *arg)
{
	char	c;

	while (*arg)
	{
		c = *arg;
		if (*arg >= 'A' && *arg <= 'Z')
			c = mirror(c, 'U');
		if (*arg >= 'a' && *arg <= 'z')
			c = mirror(c, 'L');
		write(1, &c, 1);
        *arg++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	write(1, "\n", 2);
}