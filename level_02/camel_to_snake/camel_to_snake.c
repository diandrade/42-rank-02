#include <unistd.h>

void	camel_to_snake(char *arg)
{
	char	c;

	while ((c = *arg++))
	{
		if (c >= 'A' && c <= 'Z')
		{
			c += 32;
			write(1, "_", 1);
			write(1, &c, 1);
		}
		else
		{
			write(1, &c, 1);
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write(1, "\n", 2);
}