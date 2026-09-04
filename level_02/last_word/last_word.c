#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*last_word(char *str)
{
	int	size;

	size = ft_strlen(str) - 1;

    while(str[size] == ' ')
        size--;

    while(str[size] != ' ')
        size--;

    while(str[size])
        write(1, &str[++size], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 2);
}