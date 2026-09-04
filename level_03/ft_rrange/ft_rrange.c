#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int *ptr;
	int i;

	if (start > end)
		ptr = malloc((start - end) * sizeof(int));
	else
		ptr = malloc((end - start) * sizeof(int));
	i = 0;
	while (start != end)
	{
		ptr[i++] = end;
		end -= start < end ? 1 : -1;
	}
	ptr[i] = end;
	return (ptr);
}