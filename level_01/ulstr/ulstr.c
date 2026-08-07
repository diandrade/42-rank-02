#include <unistd.h>

void	ulstr(char *str)
{
	char	conv_letter;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			conv_letter = *str++ - 32;
		else if (*str >= 'A' && *str <= 'Z')
			conv_letter = *str++ + 32;
		else
			conv_letter = *str++;
		write(1, &conv_letter, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 2);
}