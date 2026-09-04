#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	i;
	int	j;
	int	max;

	if (len == 0)
		return (0);
	i = 0;
	max = tab[i];
	while (i < len - 1)
	{
		j = i + 1;
		if (max < tab[j])
			max = tab[j];
		i++;
	}
	return (max);
}

int	main(void)
{
	int tab[] = {5, 2, 3, 4, 1};
	int len = sizeof(tab) / sizeof(tab[0]);

	printf("%d", max(tab, len));
}