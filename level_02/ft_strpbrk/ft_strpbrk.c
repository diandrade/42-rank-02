#include <unistd.h>

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

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if ((is_accepted(*s1, s2)))
			return ((char *)s1);
		*s1++;
	}
	return (NULL);
}