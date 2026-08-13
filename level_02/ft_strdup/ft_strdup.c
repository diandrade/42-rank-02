#include <stdlib.h>

char	*ft_strcpy(char *restrict dst, const char *restrict src)
{
	while (*src)
		*dst++ = *src++;
	return (dst);
}

size_t	ft_strlen(const char *src)
{
	size_t	counter;

	counter = 0;
	while (src[counter])
		counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc(ft_strlen(src));
	if (!dup)
		return (NULL);
	return (ft_strcpy(src, dup));
}