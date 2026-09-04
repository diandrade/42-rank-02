#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	int	i;

	i = 2;
	while (i < n)
        i *= 2;
    if (i == n)
        return (1);
    return (0);
}