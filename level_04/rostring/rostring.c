#include <unistd.h>

int	is_blank(char c)
{
	if (c == ' ' || c >= 9 && c <= 13)
		return (1);
	return (0);
}

void	rostring(char *s)
{
	char	*first_str_start;
	int		is_more_than_one_word;

	while (is_blank(*s) && *s != '\0')
		*s++;
	first_str_start = s;
	while (!is_blank(*s) && *s != '\0')
		*s++;
    while (is_blank(*s) && *s != '\0')
		*s++;
	is_more_than_one_word = 0;
	while (*s != '\0')
	{
		is_more_than_one_word = 1;
		while (!is_blank(*s) && *s != '\0')
			write(1, &*s++, 1);
		if (is_blank(*s) && *s != '\0')
			write(1, " ", 1);
        while (is_blank(*s) && *s != '\0')
			*s++;
	}
	if (is_more_than_one_word)
		write(1, " ", 1);
	while (!is_blank(*first_str_start) && *first_str_start != '\0')
		write(1, &*first_str_start++, 1);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		rostring(argv[1]);
	write(1, "\n", 1);
}