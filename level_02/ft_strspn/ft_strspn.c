#include <stddef.h>

int	is_accepted(char c, const char *accept)
{
	while (*accept)
	{
		if (*accept == c)
			return (1);
		*accept++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	int	counter;

	counter == 0;
	while (is_accepted(s[counter], accept))
		counter++;
	return (counter);
}