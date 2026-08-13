#include <stddef.h>

int	is_rejected(char s, const char *reject)
{
	while (*reject)
	{
		if (*reject == s)
			return (1);
		*reject++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t counter;

	counter = 0;
	while (s[counter])
	{
		if (is_rejected(s[counter], reject))
			break ;
		counter++;
	}
	return (counter);
}